#pragma once
#include "Time_.h"
#include "Date.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Event
{
protected:
	Date dt;
	Time_ tm;
public:
	Event();
	Event(Date dt, Time_ tm);
	~Event();

	virtual string type();
	void setdt(Date dt);
	Date getdt();
	void settm(Time_ tm);
	Time_ gettm();
	virtual void show();
	virtual void save(const string& fileName);
	friend ostream& operator <<(ostream& output, Event& obj);
};

