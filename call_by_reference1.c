// given two numbers a and b, add them then subtract them and assing them to a and b respectively 
//using call by reference
#include <stdio.h>
#include <conio.h>
void reference(int *x, int *y)
{
    int temp;
    temp = *x - *y;
    *x = *y + *x;
    *y = temp;
}
void main()
{
    int a = 50, b = 30;
    printf("The values of a and b is : %d and %d\n",a,b);
    reference(&a,&b);
    printf("The value of a and b now is : %d and %d\n\n",a,b);
}