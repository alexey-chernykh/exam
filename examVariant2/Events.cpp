#include "Events.h"

Events::Events()
{
	amount = 0;
	events = nullptr;
}

Events::~Events()
{
}

void Events::show()
{
	if (amount == NULL) {
		cout << "does exist." << endl;
	}
	else {
		for (int i = 0; i < amount; i++) {
			cout << "\tevent #" << i + 1 << endl;
			events[i]->show();
		}
	}
}

void Events::add(Event* obj)
{
	Event** tmp = new Event * [++amount];
	for (int i = 0; i < amount - 1; i++) {
		tmp[i] = events[i];
	}
	tmp[amount - 1] = obj;
	events = tmp;
}

void Events::searchByType(string type)
{
	int i=0;
	int count = 0;
	while (i!=amount) {
		for (i = 0; i < amount; i++) {
			if (type == events[i]->type()) {
				events[i]->show();
				count++;
			}
		}
	}
	if (count == 0) {
		cout << "error: not found\n";
	}
}

void Events::save(string fileName)
{
	for (int i = 0; i < amount; i++)
	{
		events[i]->save(fileName);
	}
}
