#include "Meeting.h"

Meeting::Meeting(Date dt, Time_ tm, string person, string place) : Event(dt, tm)
{
    this->person = person;
    this->place = place;
}

string Meeting::type()
{
    return "Meeting";
}

void Meeting::save(const string& fileName)
{
    ofstream output(fileName, ios::app);
    if (output) {
        output << type() << endl
            << dt << ' ' << tm << endl;
        output << person << endl;
        output << place << endl;
    }
    output.close();
}


void Meeting::show()
{
    Event::show();
    cout << "Person: " << person << endl;
    cout << "Place: " << place << endl;
}
