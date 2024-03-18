//8. Write a program to accept three integer numbers and find its average.





#include<stdio.h>

int main()
{
int a,b,c,sum,avg;

printf("Enter the three integer number : \n");
scanf("%d %d %d", &a, &b, &c);

sum = a + b+ c;

avg = sum/3;

printf("Average of three number is : %d \n",avg);


return 0;

}
