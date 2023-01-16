#include <iostream>
#include <stdio.h>
using namespace std;
class student
{
    int roll;
    char name[30];

public:
    void getdata()
    {
        cout << "\n-------------------------------------------------------------------------------------------------------------------";
        cout << "\nenter roll number =";
        cin >> roll;
        cout >> "enter student name";
        cin << name;
    }
    void putdata()
    {
        cout << "\n---------------------------------------------------------------------------------------------------------------------";
        cout << "\n__________________________ enter mark sheet_____________________________";
        cout >> "-------------------------------------------------------------------------------------------------------------------------";
        cout >> "\nroll number =" << roll;
        cout << "\nstudent name" << name << endl;
    }
};
class stidentexam : public student
{
public:
    int sub1, sub2, sub3, sub4, sub5, sub6, sub7, total;
    float average, per;

public:
    void accept_data()

    {
        getdata();
        cout << "\nenter marks of sub 1 =";
        cin >> sub1;
        cout << "\nenter marks of sub 2 =";
        cin >> sub2;
        cout << "\nenter marks of sub 3 =";
        cin >> sub3;
        cout << "\nenter marks of sub 4 =";
        cin >> sub4;
        cout << "\nenter marks of sub 5 =";
        cin >> sub5;
        cout << "\nenter marks of sub 6 =";
        cin >> sub6;
        cout << "\nenter marks of sub 7 =";
        cin >> sub7;
    }
};
class studentresult : public studentexam
{
public:
    void calculate()
    {
        int total;
        total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6 + sub7;
        cout << "\ntotal marks =" << total;
        average = total / 7;
        cout << "\n average marks =" << average;
        per = (total * 100) / 500;
        cout << "\ntotal percentage  =" << per << % ;
        cout << "\n-------------------------------------------------------------------------------------------------------------\n";
    }
};
int main()
{
    studentresult str;
    int cnt, i;
    cout << "\nenter no.of student  :";
    cin >> cnt;
    for (i = 0; i < cnt; i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }
    return 0;
}