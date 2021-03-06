// Exam_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <set>
#include <algorithm> 
using namespace std;


class City;
class AS;

class City {
public:
	int pop;
	string region;
	string county;
	string name;
	City(string name, int pop, string county, string region) {
		this->pop = pop;
		this->region = region;
		this->county = county;
		this->name = name;

	}
	bool operator<(City cit) const
	{
		return this->name[0] < cit.name[0];
	}
	~City() {

	}

};

class AS {
public:
	set <City> as;

	void addCity(string name, int pop, string county, string region) {
		City cit(name, pop, county, region);
		this->as.insert(cit);
	}

	bool findCity(string name) {
		for (auto e : this->as) {
			if (e.name == name) {
				return true;
			}
		}
		return false;
	}

	City findC(const char* name) {
		for (auto e : this->as) {
			if (e.name == name) {
				return e;
			}
		}
		throw "error";
	}
};





int main()
{
	AS d;
	City c(" ", 0, " ", "");
	d.addCity("aa", 6, "bb", "ax");
	d.addCity("aa", 2, "bb", "ax");
	bool fond;
	fond = d.findCity("ae");

	c = d.findC("aa");
	cout << c.pop << endl;
	return 0;
}

