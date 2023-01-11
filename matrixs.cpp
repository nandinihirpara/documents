#include <iostream>
using namespace std;
class matrix
{
    int num = 0, i = 0, j = 0, r[10];

public:
    matrix getmatrix()
    {
        cout << "enter the size of matrix=" << endl;
        cin >> num;
        cout << "enter element of matrix=" << endl;
        for (i = 0; i < num; i++)
        {
            cin >> r[i];
        }
        matrix opretor + (matrix m)
        {
            matrix summatrix;
            for (i = 0; i < num; i++)
        }
        sumMatrix.r[i] = r[i] + m.r[i];
    }
    cout << "the sum of the two matrices is=" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    for (i = 0; i < num; i++)
    {
        cout << sumMatrix.r[i] << " ";
    }
} void displaymatrixs()
{
    cout << "----------------------------------------------------------------------------" << endll;
    cout << "enter matrixs is =" << endl;
    for (i = 0; i < num; i++)
    {
        cout << r[i] << "";
    }
};
int main()
{
    matrix m1, m2, m3;
    cout << "1st matrix:" << endl;
    m1.getmatrix();
    m1.displaymatrix();
    cout << endl;
    cout << "2nd matrix:" << endl;
    m2.getmatrix();
    m2.displaymatrix();
    m3 = m1 + m2;
    return 0;
}