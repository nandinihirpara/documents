#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
class cricketer
{
public:
    char name[100];
    int run[5], j = 0, i = 0;

public:
    void getdata()
    {
        cout << "-----------------------------------------------------------------------------------------------------------------\n";
        cout << "enter name of bats man";
        cin >> name;
        cout << "---------------------------------------------------------------------------------------------------------------------\n";
        cout << "enter run of match";
        for (i = 0; i < 5; i++)
        {
            cout << "\n enter run of match=" << j << ":";
            cin >> run[i];
            j++;
        }
    }
};
class batsman : public cricketer
{
public:
    float avreragerun;
    int totalrun = 0, best = 0;
    void total()
    {
        for (int i = 0; i < 5; i++)
        {
            totalrun = totalrun + run[i]
        }
        void average()
        {
            avreragerun = (float)totalrun / 5;
        }
        void performance()
        {
            for (inti = 0; i < 5; i++)
            {
                if (run[i] > avreragerun)
                {
                    best++;
                }
            }
        }
    }
    void display()
    {
        cout << "\n"
             << name << "\t\t|" << totalrun << "\t\t |"
             << avreragerun << "\t\t|" << best;
        cout << "\n-------------------------------------------------------------------------------------------------------------------";
    }
};
int main()
{
    int run;
    for (int i = 0; i < 5; i++)
    {
        player[i].getdata();
        player[i].total();
        player[i].average();
        player[i].performance();
    }
    cout << "\n name\t\t| totalrun\t average run\t|total best performance";
    cout << "\n--------------------------------------------------------------------------------------------------------------------";
    for (int i = 0; i < 5; i++)
    {
        player[i].display();
    }
    return 0;
}