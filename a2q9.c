/*9. Write a program to display number of days in the given month and year using
a. Using If else ladder.*/





#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    if (month == 2) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            days = 29;
        else
            days = 28;
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days = 30;
    } else {
        days = 31;
    }

   
    printf("Number of days in the given month and year: %d\n", days);

    return 0;
}

