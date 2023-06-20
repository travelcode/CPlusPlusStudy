#pragma once
#include "pch.h"
#include "CppUnitTest.h"
#include "Util.h"
#include "Person.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nomadicooer;
namespace CPlusPlusUnitTest
{
	TEST_CLASS(CPlusPlusUnitTest)
	{
	public:
		//���Կ������캯������ʱ��,��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
		TEST_METHOD(testCopyConstructor1)

		{
			Person p1;
			Person p2(p1);
		}
		void doWork(Person p) {

		}
		//���Կ������캯������ʱ��2,ֵ���ݷ�ʽ������������ֵ
		TEST_METHOD(testCopyConstructor2) {
			Person p;
			doWork(p);
		}
		Person doWork() {
			Person p;
			return p;
		}
		//���Կ������캯������ʱ��3,ֵ���ݷ�ʽ������������ֵ
		TEST_METHOD(testCopyConstructor3) {
			Person p=doWork();
			printLine("%p", &p);
			printLine("%p", &p);
			//1234567890-qw
		}
	};
}
