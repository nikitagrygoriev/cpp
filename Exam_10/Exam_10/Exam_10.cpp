// Exam_10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class TextList {
public:
	char**a;
	int curr = 0;
	int size = 4;
	TextList() {
		 this->a = new char*[this->size];
	}
	~TextList() {
		delete[] this->a;
		cout << "Deleted" << endl;
	}
	TextList(char**b) {
		this->a = b;
	}
	TextList operator=(TextList text) {
		this->a = text.a;
	}
	void pushBack( char*t) {
		this->a[curr] = t;
		this->curr++;
		if (this->curr + 5 > this->size) {
			this->size = this->size * 2;
			int size = this->size;
			char** newArr = new char*[size];
			memcpy(newArr, this->a, (size) * sizeof(char*));
			delete[] this->a;
			this->a = newArr;
		}
	}
	void print() {
		for (int i = 0; i < this->curr; i++) {
			cout << (this->a[i]) << endl;
		}
	}
};


int main()
{
	TextList arr;
	char*b = "hgfadaljd";
	arr.pushBack("adaljd");
	arr.print();
    return 0;
}

