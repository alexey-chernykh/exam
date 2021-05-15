#include "Custom.h"

Custom::Custom(Date dt, Time_ tm, string description) : Event(dt, tm)
{
    this->description = description;
}

string Custom::type()
{
    return "Custom";
}

void Custom::save(const string& fileName)
{
    ofstream output(fileName, ios::app);
    if (output) {
        output << type() << endl
            << dt << ' ' << tm << endl;
        output << description << endl;
    }
    output.close();
}

void Custom::show()
{
    Event::show();
    cout << "description:" << description << endl;
}
