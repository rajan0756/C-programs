// Example 3 of call by reference
// Squaring Two Numbers
#include<stdio.h>
#include<conio.h>
void changevalue(int *x)
{
    *x = *x * *x;
}
void main()
{
    int a = 34,b=56;
    printf("The value of a is : %d\n",a);
    changevalue(&a);
    printf("The value of a now is : %d\n\n",a);
}