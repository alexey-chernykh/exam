#pragma once
#include "Event.h"
#include "BirthDay.h"
#include "Meeting.h"
#include "Custom.h"
class Events
{
	int amount;
	Event** events;
public:
	Events();
	~Events();

	void show();
	void add(Event* obj);
	void searchByType(string type);
	void save(string fileName);
};

