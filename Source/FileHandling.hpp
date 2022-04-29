#pragma once
#include "Courses.hpp"
#include "Professor.hpp"


const string profdir = "./Profs/";
const string freshdir = "./Students/Freshman/";
const string sophomoredir = "./Students/Sophomore/";
const string juniordir = "./Students/Junior/";
const string seniordir = "./Students/Senior/";

void writeToFile(Member *member)
{
    if (typeid(*member).name() == typeid(Professor).name())
    {
        Professor *prof = static_cast<Professor*>(member);
        fstream file;
        file.open(profdir+ prof->getID() +".txt", std::ios::out);
        file << prof->getName().c_str() << " " << prof->getSurname().c_str() << " " << prof->getID().c_str() << " " << prof->getBirthday() << " ";
        for (int i = 0; i < prof->getSubjects()->length(); i++)
        {
            file << prof->getSubjects()[i].c_str() << " ";
        }
        delete prof;
        file.close();
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

void updateMember(Member *member)
{
        if (typeid(*member).name() == typeid(Professor).name())
    {
        cout << "This is Prof" << endl;
        system("pause");
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

void getAllStudents()
{

}
void getAllProfs()
{

}
void findByID(string ID)
{

}

void deleteByID(string ID)
{

}


