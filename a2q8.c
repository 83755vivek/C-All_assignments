/*8. Write a program that will calculate the price for a quantity entered from the keyboard, given
that the unit price is Rs 5 and there is a discount of 10 percent for quantities over 30 and a 15
percent discount for quantities over 50.*/





#include <stdio.h>

int main() {
    int quantity;
    float unitPrice = 5.0, totalPrice;

    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    if (quantity <= 30) 
	{
        totalPrice = quantity * unitPrice;
    }
	else if (quantity > 30 && quantity <= 50) 
	{
        totalPrice = quantity * unitPrice * 0.9;
    }
	else 
	{
        totalPrice = quantity * unitPrice * 0.85;
    }

    printf("Total price for %d units: Rs %.2f\n", quantity, totalPrice);

    return 0;
}

