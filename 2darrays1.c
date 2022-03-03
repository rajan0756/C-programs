#include <stdio.h>
#include <conio.h>
void main()
{
    int marks[2][4] = {{45, 234, 2, 3}, {46, 76, 98, 12}};
    //printf("marks of student 1 is %d",marks[0]);
    /*for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d element of the array\n",i);
        scanf("%d",&marks[i]);
    }
    */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ",marks[i][j]);
            //printf("the value of %d,%d element of the array is %d\n", i, j, marks[i][j]);
        }
        printf("\n");
    }
}