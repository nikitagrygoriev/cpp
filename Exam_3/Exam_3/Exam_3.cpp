// Exam_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	double road = 0;
	vector <double> xytime;
	vector <vector<double>> vec;
	xytime.push_back(0);
	xytime.push_back(0);
	xytime.push_back(0);
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> xytime[0] >> xytime[1] >> xytime[2];
		vec.push_back(xytime);
	}
	road += sqrt(pow((vec[n - 1][0] - vec[0][0]), 2) + pow((vec[n - 1][1] - vec[0][1]), 2));
	cout << "ROAD:" << road << endl;
	cout << "VELOCITY:" << road / vec[n - 1][2] << endl;
	return 0;
}

