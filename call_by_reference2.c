// Example of call by reference
// Swapping the two Numbers
#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void main()
{
    int a = 34, b = 74;
    printf("Before swapping : %d and %d\n", a, b);
    swap(&a, &b);
    printf("After swapping : %d and %d\n", a, b);
}
