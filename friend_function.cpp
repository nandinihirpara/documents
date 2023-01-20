#include <iostream>
using namespace std;
class swapnumbers
{
public:
    int b, a;
    void getdata()
    {
        cout << "\n enter first value of number";
        cin >> b;
        cout << "\n enter second value of number";
        cin >> a;
    }
    void showdata()
    {
        cout << "b=" << b << " "
             << "a=" << a;
    }
    friend void swap(swapnumbers &s);
};
void swap(swapnumbers &s)
{
    s.b = s.b + s.a;
    s.a = s.b - s.a;
    s.b = s.b - s.a;
}
int main()
{
    swapnumbers s;
    cout << "input two swep";
    s.getdata();
    cout << endl
         << "befor swampping =" << endl;
    s.showdata();
    swap(s);
    cout << endl
         << "after swampping =" << endl;
    s.showdata();
    return 0;
}