#include <iostream>
using namespace std;
#define V 10
template <class T>
void sort(T arr[], int size)
{
    for (int y = 0; y < size; y++)
    {
        for (int j = y + 1; j < size; j++)
        {
            if (arr[y] > arr[j])
            {
                T temp;
                temp = arr[y];
                arr[y] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int int_array[V];
    cout << "enter integer array elemer =" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << int_array[i] << ", ";
    }
    return 0;
}