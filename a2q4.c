

/*4. Write a program to find maximum of two numbers using
a. If – else
b. conditional operator.*/


#include<stdio.h>

int main()
{
 int num1, num2;

printf("Enter the first number :");
scanf("%d", &num1);

printf("Enter thr second number :");
scanf("%d", &num2);

	if(num1 > num2)
	{
	printf("First number is greater \n");
	}
	else if(num1 < num2)
	{
	printf("Second number is greater \n");
	}
	else
	{
	printf("Both numbers are same\n");
	}
return 0;


}
