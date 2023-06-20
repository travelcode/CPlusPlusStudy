#pragma once
#include "pch.h"
using namespace std;
namespace nomadicooer {
	class Person {
	//成员变量
	private:
		string name;
		int age;
	//构造函数
	public:
		//默认构造函数
		Person();
		//带参构造函数
		Person(string name,int age);
		//拷贝构造函数
		Person(const Person &other);
		//析构函数
		~Person();
	//方法
	public:
		void setName(string name);
		string getName();
		void setAge(int age);
		int getAge();
	};

}

