#include <iostream>
#include <string.h>
using namespace std;
class addstring
{
public:
    char s1[100], s2[100];
    addstrind(char str1[], char str2[])
    {
        strcpy(this->s1, str1);
        strcpy(this->s2, str2);
    }
    void operator+()
    {
        cout << "\nconcatenation:<<strcat(s1,s2)";
    }
};
int main()
{
    char str1[100];
    char str2[100];
    cout << "enter string1 :";
    gets(str1);
    cout << "enter string 2 :";
    gets(str2);
    addstring a1(str1, str2);
    return 0;
}