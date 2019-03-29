#pragma once 
#include <Windows.h>
#include <sqlext.h>
#include <string>
#include <vector>
//--------------------

//fn that will display error stemming from C++ & SQL errors
void showSQLError(unsigned int handleType, const SQLHANDLE& handle);

void init_SQL(std::string address, std::string cdb, std::string cid, std::string cpw);
void disconnect_SQL();
//void printTable(std::string tableName);
//void runQuery(std::string query);
//std::vector<std::vector<std::string>> runQuery_withOutput(std::string query);

