#pragma once
#include "Event.h"
class BirthDay :
    public Event
{
protected:
    string hero;
    string place;
    int age;
public:
    BirthDay(Date dt, Time_ tm, string hero, string place, int age);
    virtual string type() override;
    virtual void save(const string& fileName) override;
    virtual void show() override;
};

