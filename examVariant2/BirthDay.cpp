#include "BirthDay.h"

BirthDay::BirthDay(Date dt, Time_ tm, string hero, string place, int age) : Event(dt, tm)
{
    this->hero = hero;
    this->place = place;
    this->age = age;
}

string BirthDay::type()
{
    return "Birthday";
}

void BirthDay::save(const string& fileName)
{
    ofstream output(fileName, ios::app);
    if (output) {
        output << type() << endl
            << dt << ' ' << tm << endl;
        output << hero << endl;
        output << place << endl;
        output << age << endl;
    }
    output.close();
}

void BirthDay::show()
{
    Event::show();
    cout << "Hero:" << hero << endl;
    cout << "Place:" << place << endl;
    cout << "Age:" << age << endl;
}
