#include "Event.h"

Event::Event()
{
	dt = Date();
	tm = Time_();
}

Event::Event(Date dt, Time_ tm)
{
	this->dt = dt;
	this->tm = tm;
}

Event::~Event()
{
}

string Event::type()
{
	return "Event";
}

void Event::setdt(Date dt)
{
	this->dt = dt;
}

Date Event::getdt()
{
	return dt;
}

void Event::settm(Time_ tm)
{
	this->tm = tm;

}

Time_ Event::gettm()
{
	return tm;
}

void Event::show()
{
	cout << "Type: " << type() << endl
		<< "Date: " << dt << endl
		<< "Time: " << tm << endl;
}

void Event::save(const string& fileName)
{
	ofstream output(fileName, ios::app);
	if (output) {
		output << type() << endl
			<< dt << ' ' << tm << endl;
	}
	output.close();
}


ostream& operator<<(ostream& output, Event& obj)
{
	output << "Date: " << obj.dt << endl;
	output << "Time: " << obj.tm << endl;
	output << "===========================" << endl;
	return output;
}
