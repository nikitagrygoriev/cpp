// Exam_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp;
	vector <int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j < n; j++)
		{
			for (int k = 2; k < n; k++)
			{
				if (j <= i || j >= k || i >= k)continue;
				cout << "{" << a[i] << ", " << a[j] << ", " << a[k] << "}" << endl;
			}
		}

	}
}

