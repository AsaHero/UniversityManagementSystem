#pragma once
#include "FileHandling.hpp"
using namespace std;


void StudentData(int option)
{
    Member *student;
    string name, surname, ID;
    int year, month, day;

    cout << "Enter the name of student: ";
    cin >> name;
    cout << "Enter the surname of student: ";
    cin >> surname;
    cout << "Enter the ID of student: ";
    cin >> ID;
    cout << "Enter the birthday of student: " << endl;
    cout << "Year: "; cin >> year;
    cout << "Month: "; cin >> month;
    cout << "Day: "; cin >> day;
    Date birthday(year, month, day);
    cout << "Enter the date of addmission:" << endl;
    cout << "Year: "; cin >> year;
    cout << "Month: "; cin >> month;
    cout << "Day: "; cin >> day;
    Date dateOfAddmission(year, month, day);

   
    switch (option)
    {
    case 1:
        student = new Freshman(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        cin.get();
    break;
    case 2:
        student = new Sophomore(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        cin.get();
    break;
    case 3:
        student = new Junior(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        cin.get();
    break;
    case 4:
        student = new Senior(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        cin.get();
    break;    
    }

}


void createStudent()
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
        StudentData(option);
    break;
    case 2:
        StudentData(option);
    break;
    case 3:
        StudentData(option);
    break;
    case 4:
        StudentData(option);
    break;    
    }

}
void allStudents()
{
    getAllStudents();
}

void updateStudentInfo(Member *student)
{
    string name, surname, new_ID, old_ID;
    Date date;
    string year, month, day;
    int option;
    cout << "What you want to change:" << endl;
    cout << "1. Name\n2. Surname\n3. ID\n4. Date of birth\n5. Date of addmission\n" << endl;
    cout << "Enter your option: ";
    cin >> option;

    if (typeid(*student).name() == typeid(Freshman).name())
    {
        Freshman *st = static_cast<Freshman*>(student);
        old_ID = st->getID();
        switch (option)
        {
        case 1:
            cout << "Enter the name of student: ";
            cin >> name;
            st->setName(name);
        break;
        case 2:
            cout << "Enter the surname of student: ";
            cin >> surname;
            st->setSurname(surname);
        break;
        case 3:

            cout << "Enter the ID of student: ";
            cin >> new_ID;
            st->setID(new_ID);    
        break;
        case 4:
            cout << "Enter the birthday of student: " << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setBirthday(date);
        break;
        case 5:
            cout << "Enter the date of addmission:" << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setDateOfAddnission(date);
        break;                                
        }

        deleteByID(old_ID);
        writeToFile(st);
    }
    else if(typeid(*student).name() == typeid(Sophomore).name())
    {
        Sophomore *st = static_cast<Sophomore*>(student);
        old_ID = st->getID();
        switch (option)
        {
        case 1:
            cout << "Enter the name of student: ";
            cin >> name;
            st->setName(name);
        break;
        case 2:
            cout << "Enter the surname of student: ";
            cin >> surname;
            st->setSurname(surname);
        break;
        case 3:

            cout << "Enter the ID of student: ";
            cin >> new_ID;
            st->setID(new_ID);    
        break;
        case 4:
            cout << "Enter the birthday of student: " << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setBirthday(date);
        break;
        case 5:
            cout << "Enter the date of addmission:" << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setDateOfAddnission(date);
        break;                                
        }

        deleteByID(old_ID);
        writeToFile(st);        
    }
    else if(typeid(*student).name() == typeid(Junior).name())
    {
        Junior *st = static_cast<Junior*>(student);
        old_ID = st->getID();
        switch (option)
        {
        case 1:
            cout << "Enter the name of student: ";
            cin >> name;
            st->setName(name);
        break;
        case 2:
            cout << "Enter the surname of student: ";
            cin >> surname;
            st->setSurname(surname);
        break;
        case 3:

            cout << "Enter the ID of student: ";
            cin >> new_ID;
            st->setID(new_ID);    
        break;
        case 4:
            cout << "Enter the birthday of student: " << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setBirthday(date);
        break;
        case 5:
            cout << "Enter the date of addmission:" << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setDateOfAddnission(date);
        break;                                
        }

        deleteByID(old_ID);
        writeToFile(st);        
    }
    else if(typeid(*student).name() == typeid(Senior).name())
    {
        Senior *st = static_cast<Senior*>(student);
        old_ID = st->getID();
        switch (option)
        {
        case 1:
            cout << "Enter the name of student: ";
            cin >> name;
            st->setName(name);
        break;
        case 2:
            cout << "Enter the surname of student: ";
            cin >> surname;
            st->setSurname(surname);
        break;
        case 3:

            cout << "Enter the ID of student: ";
            cin >> new_ID;
            st->setID(new_ID);    
        break;
        case 4:
            cout << "Enter the birthday of student: " << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setBirthday(date);
        break;
        case 5:
            cout << "Enter the date of addmission:" << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            date.setDateFromString(day + "." + month + "." + year);
            st->setDateOfAddnission(date);
        break;                                
        }

        deleteByID(old_ID);
        writeToFile(st);        
    }
    

}

void updateStudent()
{
    string ID;
    cout << "Enter the ID of student: ";
    cin >> ID;
    Member *res = findByID(ID);

        if (res != nullptr)
        {
            cout << "\n///// Found /////\n" << endl;
            if (typeid(*res).name() == typeid(Freshman).name())
            {
                cout << "This is Freshman" << endl;
                Freshman *st = static_cast<Freshman*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday: " << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < FreshmanSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
                updateStudentInfo(st);

            }
            else if (typeid(*res).name() == typeid(Sophomore).name())
            {
                cout << "This is Sophomore" << endl;
                Sophomore *st = static_cast<Sophomore*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < SophomoreSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
                updateStudentInfo(st);                
            }
            else if (typeid(*res).name() == typeid(Junior).name())
            {
                cout << "This is Junior" << endl;
                Junior *st = static_cast<Junior*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < JuniorSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
                updateStudentInfo(st);
            }
            else if (typeid(*res).name() == typeid(Senior).name())
            {
                cout << "This is Senior" << endl;
                Senior *st = static_cast<Senior*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < SeniorSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                } 
                updateStudentInfo(st);               
            }
        }
        else
        {
            cout << "\nNot Found ! :(\n" << endl;
        }
}
void findStudent()
{
    string ID;
    cout << "Enter the ID of student: ";
    cin >> ID;
    Member *res = findByID(ID);

        if (res != nullptr)
        {
            cout << "\n///// Found /////\n" << endl;
            if (typeid(*res).name() == typeid(Freshman).name())
            {
                cout << "This is Freshman" << endl;
                Freshman *st = static_cast<Freshman*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday: " << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < FreshmanSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
            }
            else if (typeid(*res).name() == typeid(Sophomore).name())
            {
                cout << "This is Sophomore" << endl;
                Sophomore *st = static_cast<Sophomore*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < SophomoreSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
            }
            else if (typeid(*res).name() == typeid(Junior).name())
            {
                cout << "This is Junior" << endl;
                Junior *st = static_cast<Junior*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < JuniorSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }
            }
            else if (typeid(*res).name() == typeid(Senior).name())
            {
                cout << "This is Senior" << endl;
                Senior *st = static_cast<Senior*>(res);
                cout << "Name: " << st->getName() << endl;
                cout << "Surname: " << st->getSurname() << endl;
                cout << "ID: " << st->getID() << endl;
                cout << "Date of birthday" << st->getBirthday() << endl;
                cout << "Date of addmission: " << st->getDateOfAddmission() << endl;
                cout << "Subjects: \n" << endl;
                for (int i = 0; i < SeniorSub::Count; i++)
                {
                    cout << st->getSubject()[i] << endl;
                }                
            }
        }
        else
        {
            cout << "\nNot Found ! :(\n" << endl;
        }
}
void deleteStudent()
{
    string ID;
    cout << "Enter the ID of student you want to delete:";
    cin >> ID;
    deleteByID(ID);
}

void createProf()
{
    Professor *prof;
    string name, surname, ID;
    int year, month, day;

    cout << "Enter the name of professor: ";
    cin >> name;
    cout << "Enter the surname of professor: ";
    cin >> surname;
    cout << "Enter the ID of professor: ";
    cin >> ID;
    cout << "Enter the birthday of professor: " << endl;
    cout << "Year: "; cin >> year;
    cout << "Month: "; cin >> month;
    cout << "Day: "; cin >> day;
    Date birthday(year, month, day);

    prof = new Professor(name, surname, birthday, ID);
    string answer;
    do
    {
        system("cls");
        cout << "Select professor's subject:" << endl;
        prof->setSubject();
        do
        {
            cout << "Do you want to select one more subject[yes(y)|no(n)]: ";
            cin >> answer;
        } while(answer != "yes" && answer != "y" && answer != "no" && answer != "n");

    } while(answer == "yes" || answer == "y");
    

    writeToFile(prof);

}
void allProfs()
{
    getAllProfs();
}
void updateProf()
{
    string ID;
    cout << "Enter the ID of professor: ";
    cin >> ID;
    Member *res = findByID(ID);
    if (res != nullptr)
    {
        Professor *prof = dynamic_cast<Professor*>(res);
        cout << "\n///// Found /////\n" << endl;
        cout << "Name: " << prof->getName() << endl;
        cout << "Surname: " << prof->getSurname() << endl;
        cout << "ID: " << prof->getID() << endl;
        cout << "Date of birthday: " << prof->getBirthday() << endl;
        cout << "Subjects taught: \n" << endl;
        for (int i = 0; i < prof->getSubjects().size(); i++)
        {
            cout << prof->getSubjects()[i] << endl;
        }

        string name, surname, answer, new_ID;
        Date birthday;
        string year, month, day;
        int option;
        cout << "What you want to change:" << endl;
        cout << "1. Name\n2. Surname\n3. ID\n4. Date of birth\n5. Subjects taught\n" << endl;
        cout << "Enter your option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter the name of professor: ";
            cin >> name;
            prof->setName(name);
        break;
        case 2:
            cout << "Enter the surname of professor: ";
            cin >> surname;
            prof->setSurname(surname);
        break;
        case 3:
            cout << "Enter the ID of professor: ";
            cin >> new_ID;
            prof->setID(new_ID);
        break;                
        case 4:
            cout << "Enter the birthday of professor: " << endl;
            cout << "Year: "; cin >> year;
            cout << "Month: "; cin >> month;
            cout << "Day: "; cin >> day;
            birthday.setDateFromString(day + "." + month + "." + year);
            prof->setBirthday(birthday);
        break;        
        case 5:
            prof->resetSubject();
            do
            {
                system("cls");
                cout << "Select proffesor's subject:" << endl;
                prof->setSubject();
                do
                {
                    cout << "Do you want to select one more subject[yes(y)|no(n)]: ";
                    cin >> answer;
                } while(answer != "yes" && answer != "y" && answer != "no" && answer != "n");
            } while(answer == "yes" || answer == "y");
        break;
        }

        deleteByID(ID);
        writeToFile(prof);

    }else
    {
        cout << "\nNot Found ! :(\n" << endl;
    }
    

}
void findProf()
{
    string ID;
    cout << "Enter the ID of professor: ";
    cin >> ID;
    Member *res = findByID(ID);
    if (res != nullptr)
    {
        Professor *prof = dynamic_cast<Professor*>(res);
        cout << "\n///// Found /////\n" << endl;
        cout << "Name: " << prof->getName() << endl;
        cout << "Surname: " << prof->getSurname() << endl;
        cout << "ID: " << prof->getID() << endl;
        cout << "Date of birthday: " << prof->getBirthday() << endl;
        cout << "Subjects taught: \n" << endl;
        for (int i = 0; i < prof->getSubjects().size(); i++)
        {
            cout << prof->getSubjects()[i] << endl;
        }
        
    }else
    {
        cout << "\nNot Found ! :(\n" << endl;
    }
    
    
}
void deleteProf()
{
    string ID;
    cout << " Enter the ID of professor you want to delete:";
    cin >> ID;
    deleteByID(ID);
}



void WelcomeAscii()
{
    std::cout << R"(
 __     __     ______     __         ______     ______     __    __     ______       
/\ \  _ \ \   /\  ___\   /\ \       /\  ___\   /\  __ \   /\ "-./  \   /\  ___\      
\ \ \/ ".\ \  \ \  __\   \ \ \____  \ \ \____  \ \ \/\ \  \ \ \-./\ \  \ \  __\      
 \ \__/".~\_\  \ \_____\  \ \_____\  \ \_____\  \ \_____\  \ \_\ \ \_\  \ \_____\    
  \/_/   \/_/   \/_____/   \/_____/   \/_____/   \/_____/   \/_/  \/_/   \/_____/ 
)" << '\n';
}


void UMS()
{
    std::cout << R"(
  __  __     _                  _ __                
 / / / /__  (_)  _____ _______ (_) /___ __          
/ /_/ / _ \/ / |/ / -_) __(_-</ / __/ // /          
\____/_//_/_/|___/\__/_/ /___/_/\__/\_, /           
   __  ___                         /___/         __ 
  /  |/  /__ ____  ___ ____ ____ __ _  ___ ___  / /_
 / /|_/ / _ `/ _ \/ _ `/ _ `/ -_)  ' \/ -_) _ \/ __/
/_/  /_/\_,_/_//_/\_,_/\_, /\__/_/_/_/\__/_//_/\__/ 
   ____         __    /___/                         
  / __/_ _____ / /____ __ _                         
 _\ \/ // (_-</ __/ -_)  ' \                        
/___/\_, /___/\__/\__/_/_/_/                        
    /___/                     
)" << '\n';
}

int ChooseMenu()
{
    int option;
    do
    {
        WelcomeAscii();
        cout << "Select, whose data you want to manipulate:" << endl;
        cout << "\n1. Professor\n2. Student\n0. Exit" << endl;
        cout << "\nEnter your option: ";
        cin >> option;

        system("cls");

    }while(option != 1 && option != 2 && option != 0);

    return option;
    
}
void ProfessorMainMenu()
{
  int option;
    do
    {
        system("cls");          
        UMS();
    
        cout << "\n1. Adding new records.\n"
                "2. List of records.\n"
                "3. Modifying records.\n"
                "4. Searching records.\n"
                "5. Deleting records.\n"
                "0. Exit\n" << endl;
        cout << "Enter you option:";
        cin >> option;

        switch (option)
        {
        case 1:
            createProf();
            system("pause");
        break;
        case 2:
            allProfs();
            system("pause");
        break;
        case 3:
            updateProf();
            system("pause");
        break;
        case 4:
            findProf();
            system("pause");
        break;
        case 5:
            deleteProf();
            system("pause");
        break;
        }
      
    
    } while (option != 0);             
}

void StudentMainMenu()
{
    int option;
    do
    {
        system("cls"); 
        UMS(); 
        cout << "\n1. Adding new records.\n"
            "2. List of records.\n"
            "3. Modifying records.\n"
            "4. Searching records.\n"
            "5. Deleting records.\n"
            "0. Exit\n" << endl;
        cout << "Enter you option:";
        cin >> option;

        switch (option)
        {
        case 1:
            createStudent();
            system("pause");
        break;
        case 2:
            allStudents();
            system("pause");
        break;
        case 3:
            updateStudent();
            system("pause");
        break;
        case 4:
            findStudent();
            system("pause");
        break;
        case 5:
            deleteStudent();
            system("pause");
        break;
        }    
    
    } while (option != 0);    
   
}



void Run() 
{
    int option = ChooseMenu();
    while(option != 0)
    {
        system("cls");          
        switch (option)
        {
        case 1:
            ProfessorMainMenu();            
        break;
        case 2:
            StudentMainMenu();
        break;
        };
        system("cls");
        option = ChooseMenu();
    }   
}