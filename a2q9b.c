

/*9. Write a program to display number of days in the given month and year using   
b. Using logical operators.
*/


#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter the month (1-12): ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);

    
    if (month == 2) {
        days = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
    } else {
        days = (month == 4 || month == 6 || month == 9 || month == 11) ? 30 : 31;
    }

    printf("Number of days in the given month and year: %d\n", days);

    return 0;
}


