#include<stdio.h>
#include<conio.h>

int main()
{

    int i, n, t1=0, t2=1, t3= t1 + t2;
   
    printf("enter your fibonacy series number : ");
    scanf("%d" , &n);
    
    printf("fibonacy series : %d, %d, ", t1, t2);
   
    for (i = 3; i <= n; i++) 
    {
        printf("%d, ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }
    
    return 0; 
}