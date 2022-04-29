#include "Student.hpp"

class Freshman: public Student
{
public:
    Freshman()
    {
        subjects = new string[FreshmanSub::Count]{ 
            "Calculus", 
            "AcademicEnglish",
            "Physics",
            "OOP",
            "IntroToIt",
            "CED"
        };                    
    }
    Freshman(string name, string surname, Date birthday, string ID, Date dateOfAddmission):Student(name, surname, birthday, ID, dateOfAddmission)
    {
        subjects = new string[FreshmanSub::Count]{ 
            "Calculus", 
            "AcademicEnglish",
            "Physics",
            "OOP",
            "IntroToIt",
            "CED"
        };                    
    }
    ~Freshman()
    {
        delete[] subjects;
    }    
};

class Sophomore: public Student
{
private:
    string* subjects;
public:
    Sophomore()
    {
        subjects = new string[SophomoreSub::Count]{ 
            "ApplicatioinProgramming",
            "AccademicEnglish",
            "SystemProgramming",
            "DigitalLogicCircuit",
            "ComputerArch",
            "LinearAlgebra",
            "DiscreteMathematics",
            "EngineeringMathematics"
        };                    
    }
    Sophomore(string name, string surname, Date birthday, string ID, Date dateOfAddmission):Student(name, surname, birthday, ID, dateOfAddmission)
    {
        subjects = new string[SophomoreSub::Count]{ 
            "ApplicatioinProgramming",
            "AccademicEnglish",
            "SystemProgramming",
            "DigitalLogicCircuit",
            "ComputerArch",
            "LinearAlgebra",
            "DiscreteMathematics",
            "EngineeringMathematics"
        };                
    }
    ~Sophomore()
    {
        delete[] subjects;
    }    
};


class Junior: public Student
{
private:
    string* subjects;
public:
    Junior()
    {
        subjects = new string[JuniorSub::Count]{ 
            "OS",
            "InternetProgramming",
            "Statistics",
            "Algorithm",
            "DataStructure",
            "DatabaseSystem",
        };                    
    }
    Junior(string name, string surname, Date birthday, string ID, Date dateOfAddmission):Student(name, surname, birthday, ID, dateOfAddmission)
    {
        subjects = new string[JuniorSub::Count]{ 
            "OS",
            "InternetProgramming",
            "Statistics",
            "Algorithm",
            "DataStructure",
            "DatabaseSystem",
        };                      
    }
    ~Junior()
    {
        delete[] subjects;
    }    
};

class Senior: public Student
{
private:
    string* subjects;
public:
    Senior()
    {
        subjects = new string[SeniorSub::Count]{ 
            "AI",
            "BigData",
            "DataEncription",
            "HumanComputerInter",
            "SignalProcessing",
            "ComputerNetworks",
        };                    
    }
    Senior(string name, string surname, Date birthday, string ID, Date dateOfAddmission):Student(name, surname, birthday, ID, dateOfAddmission)
    {
        subjects = new string[SeniorSub::Count]{ 
            "AI",
            "BigData",
            "DataEncription",
            "HumanComputerInter",
            "SignalProcessing",
            "ComputerNetworks",
        };                    
    }
    ~Senior()
    {
        delete[] subjects;
    }    
};
