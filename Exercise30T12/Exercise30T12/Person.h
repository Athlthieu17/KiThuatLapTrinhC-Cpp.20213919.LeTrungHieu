#pragma once
#include <iostream>
using namespace std;
class Person
{
    char Name[50];
    int Day, Month, Year;
    char HomeTown[100];
public:
    void cinData()
    {
        cout << "Moi ban nhap ten:"; cin.getline(Name, 50);
        cout << "Moi ban nhap ngay thang nam sinh:"; cin >> Day >> Month >> Year;
        cin.ignore(1);
        cout << "Moi ban nhap que quan:"; cin.getline(HomeTown, 100);
    }
    void exportData()
    {
        cout << "Ten cua ban la:" << Name;
        cout << "\nNgay thang nam sinh:";
        cout << Day << "/" << Month << "/" << Year;
        cout << "\nQue quan cua ban: " << HomeTown;
    }
    void setName(char* _Name[50])
    {
        char* strcpy(char* Name, char* _Name);
    }
    char* getName()
    {
        return Name;
    }

    void setHomeTown(char* _HomeTown[50])
    {
        char* strcpy(char* HomeTown, char* _HomeTown);
    }
    char* getHomeTown()
    {
        return HomeTown;
    }

    void setDate(int _Day, int _Month, int _Year)
    {
        Day = _Day;
        Month = _Month;
        Year = _Year;
    }

    void getDate(int& _Day, int& _Month, int& _Year)
    {
        _Day = Day;
        _Month = Month;
        _Year = Year;
    }
};