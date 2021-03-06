// Exam_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

class PointGPS;
class GPSTrace;

class PointGPS {
public:
	double x;
	double y;
	double time;
	PointGPS(double x, double y, double time) {
		this->x = x;
		this->y = y;
		this->time = time;
	}
	PointGPS(const PointGPS &a) {
		this->x = a.x;
		this->y = a.y;
		this->time = a.time;
	}
	PointGPS() {}
	void operator=(PointGPS a) {
		this->x = a.x;
		this->y = a.y;
		this->time = a.time;
	}
};

class GPSTrace {
public:
	int last = 0;
	int size = 2;
	PointGPS *trace;
	GPSTrace() {
		this->trace = new PointGPS[this->size];
	}
	~GPSTrace() {
		delete[] this->trace;
	}
	bool add(double x, double y, double time) {
		if (this->trace[this->last].time > time)
		{
			printf("Error.\n");
			return false;
		}
		this->last += 1;
		if (this->last + 1 > this->size) {
			this->size = this->size * 2;
			int size = this->size;
			PointGPS* newArr = new PointGPS[size];
			memcpy(newArr, this->trace, (size) * sizeof(GPSTrace));
			delete[] this->trace;
			this->trace = newArr;
		}
		PointGPS temp(x, y, time);
		this->trace[this->last] = temp;


		printf("Succeed.\n");
		return true;
	}
};


int main()
{
	GPSTrace tarcer;
	PointGPS p1(2.2, 3.2, 5);
	PointGPS p2(1.2, 3.1, 5.1);
	PointGPS p3(2.3, 2.3, 5.3);
	PointGPS p4(1.3, .3, 5.4);
	PointGPS p5(6.1, 4.5, 5.6);
	PointGPS p6(p2);
	tarcer.add(.2, .4, 1);
	tarcer.add(.2, .4, 2);
	tarcer.add(.2, .4, 3);
	tarcer.add(.2, .4, 4);
	tarcer.add(.2, .4, 5);
	tarcer.add(.2, .4, 6);
	tarcer.add(.2, .4, 7);
	tarcer.add(.2, .4, 8);
	tarcer.add(.2, .4, 9);
	tarcer.add(.2, .4, 10);
	tarcer.add(.2, .4, 9);
	tarcer.add(.2, .4, 12);
	tarcer.add(.2, .4, 13);
	tarcer.add(.2, .4, 15);
	tarcer.add(.2, .4, 16);
	tarcer.add(.2, .4, 17);
	tarcer.add(.2, .4, 18);
	tarcer.add(.2, .4, 19);
	tarcer.add(.2, .4, 12);
	return 0;
}

