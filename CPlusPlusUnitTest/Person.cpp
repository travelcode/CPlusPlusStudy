#include "pch.h"
#include "Person.h"
#include "Util.h"
using namespace nomadicooer;
Person::Person()
{
	this->name = "张山";
	this->age = 10;
	printLine("这是默认构造函数!");
}
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
	this->age = age;
	printLine("这是有参构造函数");
}

Person::Person(const Person& other)
{
	this->name = other.name;
	this->age = other.age;
	printLine("这是拷贝构造函数");
}

Person::~Person()
{
	printLine("这是析构函数");
}

void Person::setName(string name)
{
	this->name = name;
}

string Person::getName()
{
	return this->name;
}

void Person::setAge(int age)
{
	this->age = age;
}

int Person::getAge()
{
	return this->age;
}
