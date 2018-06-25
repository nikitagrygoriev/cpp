// Exam_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class A {
public:
	virtual void f() {
		printf("~A.f ");
	}
	virtual ~A() {
		f();
	}
};

class B:public A {
public:
	A a;
	 void f() {
		printf("~B.f ");
	}
	 B(int k = 0) {
		 if (k < 0)throw 0;
	 }
	~B() {
		f();
	}
};
int main()
{
	try
	{
		A*ptr =new B(-1);
		delete ptr;
	}
	catch (int e)
	{
		printf("Exc");
		return 0;
	}

    return 0;
}

