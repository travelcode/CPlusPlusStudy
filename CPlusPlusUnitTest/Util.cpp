#include "pch.h"
#include "CppUnitTest.h"
#include "Util.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
char charBuffer[1000];
void print(const char* format, ...) {
	va_list valist;
	va_start(valist, format);
	va_list originList = valist;
	valist = originList;
	vsprintf(charBuffer, format, valist);
	Logger::WriteMessage(charBuffer);
	va_end(valist);
}
void printLine(const char* format,...) {
	va_list valist;
	va_start(valist, format);
	va_list originList = valist;
	valist = originList;
	vsprintf(charBuffer, format, valist);
	Logger::WriteMessage(charBuffer);
	va_end(valist);
	Logger::WriteMessage("\n");
}

