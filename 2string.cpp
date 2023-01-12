#include <iostream>
#include <string.h>
using namespace std;
class addstring
{
public:
    char e1[50], e2[50];
    addstring(char str1[], char str2[])
    {
        strcpy(this->e1, str1);
        strcpy(this->e2, str2);
    }
    void operator+()
    {
        cout << "\n concatenation=" << strcat(e1, e2);
    }
};
// driver code
int main()
{
    char str1[60];
    char str2[70];
    cout << "enter string 1=";
    gets(str1);
    cout << "enter string 2=";
    gets(str2);
    addstring a1(str1, str2);
    addstring a2(str1, str2);
    return 0;
}