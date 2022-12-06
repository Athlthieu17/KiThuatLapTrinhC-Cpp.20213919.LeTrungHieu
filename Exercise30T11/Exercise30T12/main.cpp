#include<iostream>
#include <cstring>
#include "Complex.h"
#include "Person.h"
using namespace std;

class Date
{
protected:
    int day, month, year;
public:
    
    void cinDate()
    {
        cout << "Moi ban nhap ngay thang nam sinh:"; cin >> day >> month >> year;
    }
    void exportDate()
    {
        cout << "Ngay sinh cua ban:" << day << '/' << month << '/' << year;
    }
    void setDate(int _day, int _month, int _year)
    {
        day = _day;
        month = _month;
        year = _year;
    }
    void getDate(int& _day, int& _month, int& _year)
    {
        _day = day;
        _month = month;
        _year = year;
    }
}; 
class Person_2:Date
{
    char Name[50];
    Date date;
    char HomeTown[100];
public:
    void importPerson()
    {
        cout << "Moi ban nhap ten:"; cin.getline(Name, 50);
        date.cinDate();
        cin.ignore(1);
        cout << "Moi ban nhap que quan:"; cin.getline(HomeTown, 100);
    }
    void exportPerson()
    {
        cout << "Ten cua ban la:" << Name;
        cout << "\n";
        date.exportDate();
        cout << "\nQue quan cua ban: " << HomeTown;
    }
    void setName(char* _Name[50])
    {
        char* strcpy(char* Name,char* _Name);
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

    void setDate(int Day, int Month, int Year)
    {
       day = Day;
       month = Month;
       year = Year;
    }

    void getDate(int& Day, int& Month, int& Year)
    {
        Day = day;
        Month = month;
        Year = year;
    }
};
int main()
{
    Complex u;
    u.cinComplex(); u.coutComplex(); 
 
    
    Person a;
    a.cinData(); a.exportData();

    Person_2 b;
    b.setName("đas");


}