/* Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.  */



#include<stdio.h>

int main()

{
char ch;
int ascvalue;

printf("Enter the charecter;");
scanf(" %c" ,&ch );

printf("Decimal value: %d\n", ch);
printf("Hexadecimal value: %x\n", ch);
printf("Octal value; %o\n", ch);

printf("Enter the ASC value: ");
scanf("%d", &ascvalue);

printf("Charecter: %c\n", ascvalue);

return 0;



}
