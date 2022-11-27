#include<iostream>
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
        cout << "Moi ban nhap ten"; cin.getline(Name, 50);
        cout << "Moi ban nhap ngay thang nam sinh"; cin >> Day >> Month >> Year;
        cout << "Moi ban nhap que quan"; cin.getline(HomeTown, 100);
    }
    void exportData()
    {
        cout << "ten" << Name;
        cout << Day + "\\" + Month << +"\\" + Year;
        cout<< "que quan " << HomeTown;
    }
    void setName(char _Name[50])
    {
        Name = _Name;
    }
    char getName()
    {
        return Name;
    }

    void setHomeTown(char HomeTown[50])
    {
        this->HomeTown = HomeTown;
    }
    char getHomeTown()
    {
        return HomeTown;
    }

    void setDate(int Day, int Month, int Year)
    {
        this->Day = Day;
        this->Month = Month;
        this->Year = Year;
    }

    void getDate(int& Day, int& Month, int& Year)
    {
        Day = this->Day;
        Month = this->Month;
        Year = this->Year;
    }

};

class Person_2
{

};
int main()
{
   
}