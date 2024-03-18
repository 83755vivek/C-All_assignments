/*13. Write a program to accept a point in Cartesian co-ordinate system and decide the quadrant in
which the point lies. Also check for special cases point lies on x axis, y axis, origin */






#include <stdio.h>

int main() {
    float x, y;

   
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);


    if (x == 0 && y == 0) 
	{
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    } 
	else if (x == 0) 
	{
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } 
	else if (y == 0) 
	{
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    } 
	else {
        if (x > 0) 
		{
            if (y > 0) 
			{
                printf("The point (%.2f, %.2f) lies in the first quadrant.\n", x, y);
            } else 
			{
                printf("The point (%.2f, %.2f) lies in the fourth quadrant.\n", x, y);
            }
        } 
		else 
		{
            if (y > 0) 
			{
                printf("The point (%.2f, %.2f) lies in the second quadrant.\n", x, y);
            } else 
			{
                printf("The point (%.2f, %.2f) lies in the third quadrant.\n", x, y);
            }
        }
    }

    return 0;
}

