// Exam_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class A {
public:
	virtual void f() {
		printf("A.f ");
	}
	A() { f(); }
	~A() { printf("~A.f "); }
};

class B:public A
{
public:
	A*a;
	void f() {
		printf("B.f ");
	}

	B(A*a = 0) {
		f();
		this->a = a;
	}
	~B(){
		printf("~B.f ");
		if (a)delete a;
	}



};



int main()
{
	A*a = new B(new A());
	printf("M ");
	delete a;

    return 0;
}

