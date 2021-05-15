#pragma once
#include "Event.h"
class Meeting :
    public Event
{
protected:
    string person;
    string place;
public:
    Meeting(Date dt, Time_ tm, string person, string place);
    virtual string type() override;
    virtual void save(const string& fileName) override;
    virtual void show() override;
};


