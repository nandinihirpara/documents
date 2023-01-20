#include <iostream>
using namespace std;
template <class T>
int swap_numbers(T &x, T &y)
{
    T t;
    t = x;
    x = y;
    y = t;
    return 0;
}
int main()
{
    int a, b;
    a = 25, b = 45;
    swap_numbers(a, b);
    cout << "value a=" << a << " "
         << "Value b=" << b << endl;
    return 0;
}