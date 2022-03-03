//example 1
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,a[12];
    printf("Enter the values of the elements in the array : \n");
    for ( i = 0; i < 12; i++)
    {
       printf(" Element - %d : ",i);
       scanf("%d",&a[i]);
    }
    printf("\n");
    printf("The values stored in the array is as :");
    for ( i = 0; i < 12; i++)
    {
        printf(" %d",a[i]);
    }
}*/
 
//example 2
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[100];
    printf("Enter the no. of values to be stored in an array:");
    scanf("%d",&n);
    printf("Enter the values to be stored in an array : \n");
    for ( i = 0; i < n; i++)
    {
        printf("Value - %d = ",i);
        scanf("%d",&a[i]);
    }
   // printf("\n");
    printf("The stored values in an array is as :");
    for ( i = 0; i < n; i++)
    {
       printf(" %d",a[i]);
    }
    printf("\nThe stored values in reverse order is as :");
    for ( i =n-1; i >= 0; i--)
    {
        printf(" %d",a[i]);
    } 
    printf("\n\n");
}*/

//Example 3
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,sum=0,n,a[50];
    printf(" Enter the number of elements to be stored : ");
    scanf("%d",&n);
    printf("Enter the values to store : \n");
    for ( i = 0; i < n; i++)
    {
        printf("Elemnet - %d : ",i);
        scanf("%d",&a[i]);
    }
    
    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];  
    }
     printf("The sum of all elements in the array is : %d \n\n",sum);
}*/

//Example 4
/*#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,a[50],b[50];
    printf(" Enter the number of elements to be stored : ");
    scanf("%d",&n);
    printf("Enter the values to store : \n");
    for ( i = 0; i < n; i++)
    {
        printf("Elemnet - %d : ",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
       b[i] = a[i];       
    }
    
    printf("The elements stored in the first array are :");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\nThe elements copied into the second array are :");
    for ( i = 0; i < n; i++)
    {
        printf(" %d ",b[i]);
    }
    printf("\n\n");
    
}*/

//Example 5
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    int mm=1,ctr=0,n;
    int a[50],b[50],c[50];
    printf("Enter the no. of elmenets to be stored in an array :");
    scanf("%d",&n);
    printf("Input the values to be stored :\n");
    for ( i = 0; i < n; i++)
    {
        printf("Elements - %d = ",i);
        scanf("%d",&a[i]);
    }
   for ( i = 0; i < n; i++)
   {
       b[i]=a[i];
       c[i]=0;
   }
   for ( i = 0; i < n; i++)
   {
       for ( j = 0; j < n; j++)
       {
           if (a[i]==b[j])
           {
               c[j]=mm;
               mm++;
           }
           
       }
       mm=1;
   }
   for ( i = 0; i < n; i++)
   {
       if (c[i]==2)
       {
           ctr++;
       }
   }
       printf(" The total no. of duplicate elements found in the array is : %d\n",ctr);
       printf("\n\n");
        
}

