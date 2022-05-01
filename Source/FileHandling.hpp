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
        fstream file, all;
        file.open(profdir+ prof->getID() +".txt", std::ios::out);
        file << prof->getName() << " " << prof->getSurname() << " " << prof->getID() << " " << prof->getBirthday() << " ";
        for (int i = 0; i < prof->getSubjects().size(); i++)
        {
            file << prof->getSubjects()[i]<< " ";
        }
        file.close();

        all.open(profdir + "All" +".txt", std::ios::out|std::ios::app);
        all << prof->getName() << " " << prof->getSurname() << " " << prof->getID() << "\n";
        all.close();

        delete prof;

    }
    else if (typeid(*member).name() == typeid(Freshman).name())
    {
        Freshman *st = static_cast<Freshman*>(member);
        fstream file, all;
        file.open(freshdir + st->getID() +".txt", std::ios::out);
        file << st->getName() << " " << st->getSurname() << " " << st->getID() << " " << st->getBirthday() << " " << st->getDateOfAddmission() << " ";
        for (int i = 0; i < FreshmanSub::Count; i++)
        {
            file << st->getSubject()[i]<< " ";
        }        
        file.close();

        all.open(freshdir + "All" +".txt", std::ios::out|std::ios::app);
        all << st->getName() << " " << st->getSurname() << " " << st->getID() << "\n";
        all.close();

        delete st;
    }
    else if (typeid(*member).name() == typeid(Sophomore).name())
    {
        Sophomore *st = static_cast<Sophomore*>(member);
        fstream file, all;
        file.open(sophomoredir + st->getID() +".txt", std::ios::out);
        file << st->getName() << " " << st->getSurname() << " " << st->getID() << " " << st->getBirthday() << " " << st->getDateOfAddmission() << " ";
        for (int i = 0; i < SophomoreSub::Count; i++)
        {
            file << st->getSubject()[i]<< " ";
        }        
        file.close();

        all.open(sophomoredir + "All" +".txt", std::ios::out|std::ios::app);
        all << st->getName() << " " << st->getSurname() << " " << st->getID() << "\n";
        all.close();

        delete st;

    }
    else if (typeid(*member).name() == typeid(Junior).name())
    {
        Junior *st = static_cast<Junior*>(member);
        fstream file, all;
        file.open(juniordir + st->getID() +".txt", std::ios::out);
        file << st->getName() << " " << st->getSurname() << " " << st->getID() << " " << st->getBirthday() << " " << st->getDateOfAddmission() << " ";
        for (int i = 0; i < JuniorSub::Count; i++)
        {
            file << st->getSubject()[i]<< " ";
        }
        file.close();

        all.open(juniordir + "All" +".txt", std::ios::out|std::ios::app);
        all << st->getName() << " " << st->getSurname() << " " << st->getID() << "\n";
        all.close();


        delete st;

    }
    else if (typeid(*member).name() == typeid(Senior).name())
    {
        Senior *st = static_cast<Senior*>(member);
        fstream file, all;
        file.open(seniordir + st->getID() +".txt", std::ios::out);
        file << st->getName() << " " << st->getSurname() << " " << st->getID() << " " << st->getBirthday() << " " << st->getDateOfAddmission() << " ";
        for (int i = 0; i < SeniorSub::Count; i++)
        {
            file << st->getSubject()[i]<< " ";
        }
        file.close();

        all.open(seniordir + "All" +".txt", std::ios::out|std::ios::app);
        all << st->getName() << " " << st->getSurname() << " " << st->getID() << "\n";
        all.close();

        delete st;
    }
    else 
    {
        cout << "Who is this ? :)" << endl; 
    }    
}

void printAll(string path)
{
    system("cls");
    ifstream all(path + "All.txt");
    string line;
    while (!all.eof())
    {
        getline(all, line);
        cout << line << endl;
    }
    all.close();
    
}

void getAllStudents()
{
    int option;
    cout << "Select the cource: " << endl;
    cout << "1. Freshman" << endl;
    cout << "2. Sophomore" << endl;
    cout << "3. Junior" << endl;
    cout << "4. Senior" << endl;

    cout << "Enter your optio: ";
    cin >> option;

    switch (option)
    {
    case 1:
        printAll(freshdir);
    break;
    case 2:
        printAll(sophomoredir);
    break;
    case 3:
        printAll(juniordir);
    break;
    case 4:
        printAll(seniordir);
    break;    
    }
}
void getAllProfs()
{
    printAll(profdir);
}
Member* findByID(string ID)
{
    string name, surname, date, date1, subject;
    ifstream file(profdir + ID.c_str() + ".txt");
    if(file.good())
    {
        file >> name >> surname >> ID >> date;
        Date birthday;
        birthday.setDateFromString(date); 
        Professor *prof = new Professor(name, surname, birthday, ID);
        while (!file.eof())
        {
            file >> subject;
            prof->setSubjectWithString(subject);
            subject = "";                     
        }
        file.close();
        return prof;
    }
    else{
        file.close();
    }
    file.open(freshdir + ID.c_str() + ".txt");
    if(file.good())
    {
        file >> name >> surname >> ID >> date >> date1;
        Date birthday, dateOfAddmission;
        birthday.setDateFromString(date);
        dateOfAddmission.setDateFromString(date1);
        file.close();
        Freshman *st = new Freshman(name, surname, birthday, ID, dateOfAddmission);
        return st;
    }
    else{
        file.close();
    }

    file.open(sophomoredir + ID.c_str() + ".txt");
    if(file.good())
    {
        file >> name >> surname >> ID >> date >> date1;
        Date birthday, dateOfAddmission;
        birthday.setDateFromString(date);
        dateOfAddmission.setDateFromString(date1);
        file.close();
        Sophomore *st = new Sophomore(name, surname, birthday, ID, dateOfAddmission);
        return st;        
    }
    else{
        file.close();
    }

    file.open(juniordir + ID.c_str() + ".txt");
    if(file.good())
    {
        file >> name >> surname >> ID >> date >> date1;
        Date birthday, dateOfAddmission;
        birthday.setDateFromString(date);
        dateOfAddmission.setDateFromString(date1);
        file.close();
        Junior *st = new Junior(name, surname, birthday, ID, dateOfAddmission);
        return st;        
    }
    else{
        file.close();
    }

    file.open(seniordir + ID.c_str() + ".txt");
    if(file.good())
    {
        file >> name >> surname >> ID >> date >> date1;
        Date birthday, dateOfAddmission;
        birthday.setDateFromString(date);
        dateOfAddmission.setDateFromString(date1);
        file.close();
        Senior *st = new Senior(name, surname, birthday, ID, dateOfAddmission);
        return st;        
    }
    else{
        file.close();
    }

    return nullptr;
}

void deleteByID(string ID_del)
{
    if(remove((profdir + ID_del + ".txt").c_str()) == 0)
    {
        string name, surname, ID;
        ifstream old_all(profdir + "All.txt");
        ofstream new_all(profdir + "new_All.txt", std::ios::app);
        while(!old_all.eof())
        {
            old_all >> name >> surname >> ID;
            if(ID == ID_del) continue;
            new_all << name << " " << surname << " " << ID << "\n";
            name = surname = ID = "";            
        }
        old_all.close();
        new_all.close();
        remove((profdir+ "All.txt").c_str());
        rename((profdir+ "new_All.txt").c_str(), (profdir + "All.txt").c_str());

    }
    else if (remove((freshdir + ID_del + ".txt").c_str()) == 0)
    {
        string name, surname, ID;
        ifstream old_all(freshdir + "All.txt");
        ofstream new_all(freshdir + "new_All.txt", std::ios::app);
        while(!old_all.eof())
        {
            old_all >> name >> surname >> ID;
            if(ID == ID_del) continue;
            new_all << name << " " << surname << " " << ID << "\n";
            name = surname = ID = "";            
        }
        old_all.close();
        new_all.close();
        remove((freshdir+ "All.txt").c_str());
        rename((freshdir+ "new_All.txt").c_str(), (freshdir + "All.txt").c_str());
    }  
    else if (remove((sophomoredir + ID_del + ".txt").c_str()) == 0)
    {
        string name, surname, ID;
        ifstream old_all(sophomoredir + "All.txt");
        ofstream new_all(sophomoredir + "new_All.txt", std::ios::app);
        while(!old_all.eof())
        {
            old_all >> name >> surname >> ID;
            if(ID == ID_del) continue;
            new_all << name << " " << surname << " " << ID;
            name = surname = ID = "";        
        }
        old_all.close();
        new_all.close();
        remove((sophomoredir+ "All.txt").c_str());
        rename((sophomoredir+ "new_All.txt").c_str(), (sophomoredir + "All.txt").c_str());        
    }   
    else if (remove((juniordir + ID_del + ".txt").c_str()) == 0)
    {
        string name, surname, ID;
        ifstream old_all(juniordir + "All.txt");
        ofstream new_all(juniordir + "new_All.txt", std::ios::app);
        while(!old_all.eof())
        {
            old_all >> name >> surname >> ID;
            if(ID == ID_del) continue;
            new_all << name << " " << surname << " " << ID << "\n";
            name = surname = ID = "";
        }
        old_all.close();
        new_all.close();
        remove((juniordir+ "All.txt").c_str());
        rename((juniordir+ "new_All.txt").c_str(), (juniordir + "All.txt").c_str());        
    }    
    else if (remove((seniordir + ID_del + ".txt").c_str()) == 0)
    {
        string name, surname, ID;
        ifstream old_all(seniordir + "All.txt");
        ofstream new_all(seniordir + "new_All.txt", std::ios::app);
        while(!old_all.eof())
        {
            old_all >> name >> surname >> ID;
            if(ID == ID_del) continue;
            new_all << name << " " << surname << " " << ID << "\n";
            name = surname = ID = "";
        }
        old_all.close();
        new_all.close();
        remove((seniordir+ "All.txt").c_str());
        rename((seniordir+ "new_All.txt").c_str(), (seniordir + "All.txt").c_str());    
    }
    else    
        cout << "Not found ! :(" << endl;
}   


