// Exam_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A {
public:
	virtual void f(int i) {
		printf("A.f:%d", i);
	}
	A(int i) { f(i); }
	~A() { f(5); }
};

class B : public A {
public:
	virtual void f(int i) {
		printf("B.f:%d", i);
	}
	B(int i = 0) : A(-1) {
		if (i < 0)throw 0;
		else f(i);
	}
};


int main()
{
	try
	{
		A *a = new B(-2);
		a->f(1);
		delete a;
	}
	catch (int e)
	{
		printf("Exc.");
	}


	return 0;
}

