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
    std::vector<std::string> subjects;
public:

    Professor()
    {
        ID = "";
    }
    Professor(string name, string surname, Date birthday, string ID):Member(name, surname, birthday)
    {
        this->ID= ID;
    }

    ~Professor()
    {
    }
    string getID()
    {
        return this->ID;
    }
    void setID(string ID)
    {
        this->ID = ID;
    }
    std::vector<std::string> getSubjects()
    {
        return subjects;
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
        subjects.push_back(all_subjects[id]);
    }

    void setSubjectWithString(string subject)
    {
        for (int i = 0; i < 25; i++)
        {
            if (subject == all_subjects[i])
            {
                subjects.push_back(all_subjects[i]);
                break;
            }
            
        }
        
    }

    void resetSubject()
    {
        subjects.clear();
    }

};