#pragma once
#include "lib.hpp"

const string all_subjects[]{
    "Calculus",        
    "AcademicEnglish",
    "Physics",
    "OOP",
    "IntroToIt",
    "CED",
    "ApplicatioinProgramming",
    "AccademicEnglish",
    "SystemProgramming",
    "DigitalLogicCircuit",
    "ComputerArch",
    "LinearAlgebra",
    "DiscreteMathematics",
    "EngineeringMathematics"
    "OS",
    "InternetProgramming",
    "Statistics",
    "Algorithm",
    "DataStructure",
    "DatabaseSystem",
    "AI",
    "BigData",
    "DataEncription",
    "HumanComputerInter",
    "SignalProcessing",
    "ComputerNetworks",        
};

class Professor: public Member
{
private:
    string ID;
    string *subjects;
public:

    Professor()
    {
        ID = "";
        subjects = nullptr;
    }
    Professor(string name, string surname, Date birthday, string ID):Member(name, surname, birthday)
    {
        this->ID= ID;
    }

    ~Professor()
    {
        delete[] subjects;
    }
    string getID()
    {
        return this->ID;
    }
    void setID(string ID)
    {
        this->ID = ID;
    }
    string* getSubjects()
    {
        return this->subjects;
    }

    void setSubject()
    {
        cout << "Id    Subjects\n" << endl;
        for (int i = 0; i < 25; i++)
        {
            cout << i << ". " << all_subjects[i] << endl;
        }
        int id;
        cout << "Enter the id of subject: ";
        cin >> id;

        if (subjects != nullptr)
        {
            int length = subjects->length();                    
            string* temp = new string[length+1];
            for (size_t i = 0; i < length; i++)
            {
                temp[i] = subjects[i];
            }
            temp[length] = all_subjects[id];
            delete[] subjects;
            subjects = temp;
            temp = nullptr;
            delete[] temp;
        } 
        else
        {
            subjects = new string(all_subjects[id]);
        }
    }

};