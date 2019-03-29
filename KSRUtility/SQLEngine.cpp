#include <iostream>
#include <Windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <string>
//--------------------
#include "SQLEngine.h"

using namespace std;

SQLHANDLE SQLEnvHandle = NULL;
SQLHANDLE SQLConnectionHandle = NULL;
SQLHANDLE SQLStatementHandle = NULL;
SQLRETURN retCode = 0;

void showSQLError(unsigned int handleType, const SQLHANDLE& handle) {
	SQLCHAR SQLState[1024]; //aray of chars
	SQLCHAR message[1024];

	//fn performs a sort of diagnosis on handleType, handle and put the results of diag in SQLState and message
	//Dont think of SQL_SUCCESS as a binary. Rather, SQL_SUCCESS is a possible return type from SQLGetDiagRec
	if (SQL_SUCCESS == SQLGetDiagRec(handleType, handle, 1, SQLState, NULL, message, 1024, NULL)) {
		cout << "SQL driver message: " << message << "\nSQL State: " << SQLState << endl;
	}
}

void init_SQL(string address, string cdb, string cid, string cpw) {
	//Dont think of SQL_SUCCESS as a binary. Rather, SQL_SUCCESS is a possible return type from (...)
	cout << "--- INITIALIZING SQL DATABASE CONNECTION ---" << endl;
	bool connected = false;

	// force runs once only
	do {
		//allocates the environment. If it is an error, (Ie. we cant allocate the env) then 
		if (SQL_SUCCESS != (SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &SQLEnvHandle))) {
			break;
		}

		//standard input which sets attributes that cover the enviroment
		if (SQL_SUCCESS != (SQLSetEnvAttr(SQLEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))) {
			break;
		}

		//allocating the connection
		if (SQL_SUCCESS != (SQLAllocHandle(SQL_HANDLE_DBC, SQLEnvHandle, &SQLConnectionHandle))) {
			break;
		}

		//setting attributes of the connection. Sets timeout of the connections
		if (SQL_SUCCESS != (SQLSetConnectAttr(SQLConnectionHandle, SQL_LOGIN_TIMEOUT, (SQLPOINTER)5, 0))) {
			break;
		}

		SQLCHAR RETConString[1024];

		//for connecting to the SQL server, avoids prompt for the user. In quotation, we specify location, port etc.
		//potential problem: see 29:30 in video
		switch (SQLDriverConnect(SQLConnectionHandle, NULL, (SQLCHAR*)("DRIVER={SQL Server}; SERVER=" + address + "; DATABASE=" + cdb + "; UID=" + cid + "; PWD=" + cpw + ";").c_str(), SQL_NTS, RETConString, 1024, NULL, SQL_DRIVER_NOPROMPT)) {
		case SQL_SUCCESS:
			break;
		case SQL_SUCCESS_WITH_INFO:
			break;
		case SQL_NO_DATA_FOUND:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			retCode = -1;
			break;
		case SQL_INVALID_HANDLE:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			retCode = -1;
			break;
		case SQL_ERROR:
			showSQLError(SQL_HANDLE_DBC, SQLConnectionHandle);
			retCode = -1;
			break;
		default:
			break;
		}

		if (retCode == -1)
			break;

		//allocated the statement using variable SQLConnection handle. Allocates it in &SQLStatement handle
		if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, SQLConnectionHandle, &SQLStatementHandle)) {
			break;
		}
		connected = true;
	} while (FALSE);
	if (connected) {
		cout << "--- CONNECTED TO " << cdb << " ---" << endl;
	}
	else {
		cout << "ERROR: Could not connect to " << cdb << endl;
	}
}

void printTable(string tableName) { // TODO: Make smart and read table column headings and properly print it out

	if (SQL_SUCCESS != (SQLExecDirect(SQLStatementHandle, (SQLCHAR*)("SELECT * FROM " + tableName).c_str(), SQL_NTS))) {
		cout << "ERROR: Could not print " << tableName << " as it is not a table in the current database" << endl;
		showSQLError(SQL_HANDLE_STMT, SQLStatementHandle);
	}
	else {
		// query was sucess; we print the data
		//db params we expect to find with our query sample
		int index;
		char name[256] = "ERROR - NAME NOT FOUND";
		int age;


		//we fetch the result of the statements; Ie. fetching each row from resulting query
		while (SQLFetch(SQLStatementHandle) == SQL_SUCCESS) {

			//1 refers to column. puts result in name declared above
			SQLGetData(SQLStatementHandle, 1, SQL_C_DEFAULT, &index, sizeof(index), NULL);
			//2 refers to column. puts result in name declared above
			SQLGetData(SQLStatementHandle, 2, SQL_C_DEFAULT, &name, sizeof(name), NULL);
			//3 refers to column. puts result in age declared above
			SQLGetData(SQLStatementHandle, 3, SQL_C_DEFAULT, &age, sizeof(age), NULL);

			cout << index << " ";
			cout << name << " ";
			cout << age << endl;
		}
		// SQLCloseCursor closes a cursor that has been opened on a statement and discards pending results.
		if (SQL_SUCCESS != (SQLFreeStmt(SQLStatementHandle, SQL_CLOSE))) {
			cout << "ERROR: Failed to close SQL cursor" << endl;
		}
	}
}

void runQuery(string query) {
	if (SQL_SUCCESS != (SQLExecDirect(SQLStatementHandle, (SQLCHAR*)query.c_str(), SQL_NTS))) {
		showSQLError(SQL_HANDLE_STMT, SQLStatementHandle);
		cout << "ERROR: failed to run: " << query << endl;
	}
	//else {
		// SQLCloseCursor closes a cursor that has been opened on a statement and discards pending results.
		if (SQL_SUCCESS != (SQLFreeStmt(SQLStatementHandle, SQL_CLOSE))) {
			cout << "ERROR: Failed to close SQL cursor" << endl;
		}
	//}
}

/*
std::vector<std::vector<std::string>> runQuery_withOutput(std::string query) {
	vector<vector<std::string>> result;
	

	if (SQL_SUCCESS != (SQLExecDirect(SQLStatementHandle, (SQLCHAR*)query.c_str(), SQL_NTS))) {
		showSQLError(SQL_HANDLE_STMT, SQLStatementHandle);
		cout << "ERROR: failed to run: " << query << endl;
	}
	else {
		std::string token;
		int tokens;
		std::string tst = std::to_string(tokens);

		//ISSUE: we need to know what type of variable is in SQL col and convert it to string
		//TODO: funtion to write: vector<string> getColType(string table)

		if (SQL_SUCCESS != (SQLFreeStmt(SQLStatementHandle, SQL_CLOSE))) {
			cout << "ERROR: Failed to close SQL cursor" << endl;
		}
	}



	
	return result;
}
*/
/*
// query was sucess; we print the data
		//db params we expect to find with our query sample
		int index;
		char name[256] = "ERROR - NAME NOT FOUND";
		int age;
		//we fetch the result of the statements; Ie. fetching each row from resulting query
		while (SQLFetch(SQLStatementHandle) == SQL_SUCCESS) {

			//1 refers to column. puts result in name declared above
			SQLGetData(SQLStatementHandle, 1, SQL_C_DEFAULT, &index, sizeof(index), NULL);
			//2 refers to column. puts result in name declared above
			SQLGetData(SQLStatementHandle, 2, SQL_C_DEFAULT, &name, sizeof(name), NULL);
			//3 refers to column. puts result in age declared above
			SQLGetData(SQLStatementHandle, 3, SQL_C_DEFAULT, &age, sizeof(age), NULL);

			cout << index << " ";
			cout << name << " ";
			cout << age << endl;
		}
*/

void disconnect_SQL() {
	cout << "--- DISCONNECTING SQL DATABASE SESSION ---" << endl;
	//Freeing sources
	SQLFreeHandle(SQL_HANDLE_STMT, SQLStatementHandle);

	//disconnecting from server
	SQLDisconnect(SQLConnectionHandle);

	//Freeing sources
	SQLFreeHandle(SQL_HANDLE_DBC, SQLConnectionHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, SQLEnvHandle);
}

// INSERT MORE FN HERE
