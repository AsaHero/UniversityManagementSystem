#pragma once
#include "FileHandling.hpp"
using namespace st
void WelcomeAscii()
{
    std::cout << R"(

            ╭╮╭╮╭╮╱╱╭╮
            ┃┃┃┃┃┃╱╱┃┃
            ┃┃┃┃┃┣━━┫┃╭━━┳━━┳╮╭┳━━╮
            ┃╰╯╰╯┃┃━┫┃┃╭━┫╭╮┃╰╯┃┃━┫
            ╰╮╭╮╭┫┃━┫╰┫╰━┫╰╯┃┃┃┃┃━┫
            ╱╰╯╰╯╰━━┻━┻━━┻━━┻┻┻┻━━╯	
)" << '\n';
}


void UMS()
{
    std::cout << R"(
        🅄 🄽 🄸 🅅 🄴 🅁 🅂 🄸 🅃 🅈
        🄼 🄰 🄽 🄰 🄶 🄴 🄼 🄴 🄽 🅃
        🅂 🅈 🅂 🅃 🄴 🄼
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

        system("clear");

    }while(option != 1 && option != 2 && option != 0);

    return option;
    
}
void ProfessorMainMenu()
{
  int option;
    do
    {
        system("clear");          
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
            //createStudent();
        break;
        case 2:
            //allStudents();
        break;
        case 3:
            //updateStudent();
        break;
        case 4:
            //findStudent();
        break;
        case 5:
            // deleteStudent();
        break;
        }
      
    
    } while (option != 0);             
}

void StudentMainMenu()
{
    int option;
    do
    {
        system("clear"); 
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
            //createProf();
        break;
        case 2:
            //allProfs();
        break;
        case 3:
            //updateProf();
        break;
        case 4:
            //findProft();
        break;
        case 5:
            // deleteProf();
        break;
        }    
    
    } while (option != 0);    
   
}



void Run() 
{
    int option = ChooseMenu();
    while(option != 0)
    {
        system("clear");          
        switch (option)
        {
        case 1:
            StudentMainMenu();
            
        break;
        case 2:
            ProfessorMainMenu();
        break;
        };
        system("clear");
        option = ChooseMenu();
    }   
}