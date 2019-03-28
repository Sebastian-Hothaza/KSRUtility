#pragma once
#include <string>

class member {
	std::string name;
	int age;

public:
	member(std::string, int) ;
	std::string getName();
	int getAge();
	void setName(std::string);
	void setAge(int);
	void printMem();
};