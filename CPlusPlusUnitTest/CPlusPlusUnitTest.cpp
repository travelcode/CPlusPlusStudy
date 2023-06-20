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
		//测试拷贝构造函数调用时机,用一个已经创建完毕的对象来初始化一个新对象
		TEST_METHOD(testCopyConstructor1)

		{
			Person p1;
			Person p2(p1);
		}
		void doWork(Person p) {

		}
		//测试拷贝构造函数调用时机2,值传递方式给函数参数传值
		TEST_METHOD(testCopyConstructor2) {
			Person p;
			doWork(p);
		}
		Person doWork() {
			Person p;
			return p;
		}
		//测试拷贝构造函数调用时机3,值传递方式给函数参数传值
		TEST_METHOD(testCopyConstructor3) {
			Person p=doWork();
			printLine("%p", &p);
			printLine("%p", &p);
			//1234567890-qw
		}
	};
}
