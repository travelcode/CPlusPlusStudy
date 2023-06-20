#include "pch.h"
#include "Person.h"
#include "Util.h"
using namespace nomadicooer;
Person::Person()
{
	this->name = "��ɽ";
	this->age = 10;
	printLine("����Ĭ�Ϲ��캯��!");
}
Person::Person(string name, int age)
{
	this->name = name;
	this->age = age;
	this->age = age;
	printLine("�����вι��캯��");
}

Person::Person(const Person& other)
{
	this->name = other.name;
	this->age = other.age;
	printLine("���ǿ������캯��");
}

Person::~Person()
{
	printLine("������������");
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
