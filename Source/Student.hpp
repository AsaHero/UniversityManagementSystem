#include "lib.hpp"

namespace FreshmanSub {
    enum Sub
    {
        Calculus,
        AcademicEnglish,
        Physics,
        OOP,
        IntroToIt,
        CED,
        Count
    };
}
namespace SophomoreSub {
    enum Sub
    {
        ApplicatioinProgramming,
        AccademicEnglish,
        SystemProgramming,
        DigitalLogicCircuit,
        ComputerArch,
        LinearAlgebra,
        DiscreteMathematics,
        EngineeringMathematics,
        Count

    };
}

namespace JuniorSub {
    enum Sub
    {
        OS,
        InternetProgramming,
        Statistics,
        Algorithm,
        DataStructure,
        DatabaseSystem,
        Count
    };
}
namespace SeniorSub {
    enum Sub
    {
        AI,
        BigData,
        DataEncription,
        HumanComputerInter,
        SignalProcessing,
        ComputerNetworks,
        Count
    };
}

class Student: public Member 
{
private:
    string ID;
    Date dateOfAddmission;
protected:
    string* subjects;
public:

    Student()
    {
        ID = "";
    }

    Student(string name, string surname, Date birthday, string ID, Date dateOfAddmission):Member(name, surname, birthday)
    {
        this->ID = ID;
        this->dateOfAddmission = dateOfAddmission;
    }

    string getID()
    {
        return this->ID;
    }

    void setID(string ID)
    {
        this->ID = ID;
    }
    Date getDateOfAddmission()
    {
        return this->dateOfAddmission;
    }
    void setDateOfAddnission(Date &dateOfAddmission)
    {
        this->dateOfAddmission = dateOfAddmission;
    }

    string* getSubject()
    {
        return this->subjects;
    }
    virtual ~Student(){}

};