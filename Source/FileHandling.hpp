#pragma once
#include "Courses.hpp"
#include "Professor.hpp"

void writeToFile(Member *member)
{
    if (typeid(*member).name() == typeid(Professor).name())
    {
        cout << "This is Prof" << endl;
    }
    else if (typeid(*member).name() == typeid(Freshman).name())
    {
        cout << "This is Freshman" << endl;
    }
    else if (typeid(*member).name() == typeid(Sophomore).name())
    {
        cout << "This is Sophomore" << endl;
    }
    else if (typeid(*member).name() == typeid(Junior).name())
    {
        cout << "This is Junior" << endl;
    }
    else if (typeid(*member).name() == typeid(Senior).name())
    {
        cout << "This is Senior" << endl;
    }
    else 
    {
        cout << "Who is this ? :)" << endl; 
    }    
}

