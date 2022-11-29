#include<iostream>
#include <cstring>
using namespace std;

class Complex
{
    float a, b;
public:
    void cinComplex()
    {
        cout << "nhap phan thuc :"; cin >> a;
        cout << "nhap phan ao :"; cin >> b;
    }
    void coutComplex()
    {
        cout << "\nSo phuc la:" << a <<"+"<<b<<"j";
    }
    void setReal(float a)
    {
        this->a = a;
    }
    float getReal()
    {
        return a;
    }
    void setVirtual(float b) {
        this->b = b;
    }

    float getVirtual() {
        return b;
    }
    void setRealVirtual(float a, float b)
    {
        this->a = a;
        this->b = b;
    }
    void getRealVirtual(float& a, float& b)
    {
        a = this->a;
        b = this->b;
    }
};

class Person
{
    char Name[50];
    int Day,Month,Year;
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
        cout << Day<<"/"<<Month <<"/"<<Year;
        cout<< "\nQue quan cua ban: " << HomeTown;
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
    Person u1;
    Date ntns;
    u1.setDate(17, 07, 2003);
    u1.exportData();


}