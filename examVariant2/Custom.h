#pragma once
#include "Event.h"
class Custom :
    public Event
{
protected:
    string description;
    
public:
    Custom(Date dt, Time_ tm, string description);
    virtual string type() override;
    virtual void save(const string& fileName) override;
    virtual void show() override;

};

