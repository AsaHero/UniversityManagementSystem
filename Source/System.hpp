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
        system("pause");
    break;
    case 2:
        student = new Sophomore(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        system("pause");
    break;
    case 3:
        student = new Junior(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        system("pause");
    break;
    case 4:
        student = new Senior(name, surname, birthday, ID, dateOfAddmission);
        writeToFile(student);
        system("pause");
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
void updateStudent()
{
    //updateMember();
}
void findStudent()
{
    //findByID();
}
void deleteStudent()
{
    //deleteByID();
}

void createProf()
{
    Member *prof;
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
    writeToFile(prof);

}
void allProfs()
{
    getAllProfs();
}
void updateProf()
{
    //updateMember();

}
void findProf()
{
    //findByID();
}
void deleteProf()
{
    //deleteByID();
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
            createStudent();
        break;
        case 2:
            allStudents();
        break;
        case 3:
            updateStudent();
        break;
        case 4:
            findStudent();
        break;
        case 5:
            deleteStudent();
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
            createProf();
        break;
        case 2:
            allProfs();
        break;
        case 3:
            updateProf();
        break;
        case 4:
            findProf();
        break;
        case 5:
            deleteProf();
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
            StudentMainMenu();
            
        break;
        case 2:
            ProfessorMainMenu();
        break;
        };
        system("cls");
        option = ChooseMenu();
    }   
}