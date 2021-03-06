// Exam_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int a, b, temp;
	set <int> a1;
	set <int> b1;
	vector<int> s3;
	cin >> a >> b;

	for (int i = 0; i < a; ++i) {
		cin >> temp;
		a1.insert(temp);
	}
	for (int i = 0; i < b; ++i) {
		cin >> temp;
		b1.insert(temp);
	}
	
	set_intersection(a1.begin(), a1.end(), b1.begin(), b1.end(), back_inserter(s3));
	
	for (auto e : s3) {
		cout << e << " ";
	}

	return 0;
}

