
/* Q.1 Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.
*/



#include<stdio.h>

void main()

{
int num1, num2, sum, diff, product;

  printf("please enter first number : ");
  scanf("%d", &num1);

  printf("please enter second number : ");
  scanf("%d", &num2);

  sum = num1+num2;
  printf("Sum OF given number is :%d \n ",sum);

  diff = num1-num2;
  printf("Difference of given is :%d \n", diff);

  product = num1*num2;
  printf("product of given numberis :%d \n",product);



}
