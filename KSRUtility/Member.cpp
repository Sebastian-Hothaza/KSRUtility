#include <iostream>
//--------------------
#include "Member.h"
// default ctor
member::member(std::string name, int age) {
	this->name = name;
	this->age = age;
}

std::string member::getName() {
	return name;
}
int member::getAge() {
	return age;
}

void member::setName(std::string name){
	this->name = name;
}

void member::setAge(int age) {
	this->age = age;
}

void member::printMem()
{
	std::cout << getName() << " " << getAge() << std::endl;
}
