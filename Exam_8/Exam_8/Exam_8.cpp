// Exam_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Word
{
public:
	string text;
	string lang;
	
	Word() {	}
	~Word() {}
	Word* addWord(map<string,string>t,Word a) {
		t.insert(a.text, a.lang);
		return t.find(a.text);
	}
};

class Meaning {
public:
	Word *first;
	Word *second;
	map <Word*, Word*> meanings;
};


class Dict {
	map<Word,Meaning> dicts;
};



int main()
{
	map <string, string> words;
    return 0;
}

