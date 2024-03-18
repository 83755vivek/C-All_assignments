// 6. Write a program to accept an integer value and print its table.

#include<stdio.h>

int main()
{
    int a;
	int i;

	printf("Enter a integer: \n");
    scanf("%d", &a);

	for (i = 1; i<=10; i++)
	{

     printf("%d * %d = %d \n", a * i);
	}
return 0;
}
