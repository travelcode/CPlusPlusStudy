#pragma once
#include "pch.h"
using namespace std;
namespace nomadicooer {
	class Person {
	//��Ա����
	private:
		string name;
		int age;
	//���캯��
	public:
		//Ĭ�Ϲ��캯��
		Person();
		//���ι��캯��
		Person(string name,int age);
		//�������캯��
		Person(const Person &other);
		//��������
		~Person();
	//����
	public:
		void setName(string name);
		string getName();
		void setAge(int age);
		int getAge();
	};

}

