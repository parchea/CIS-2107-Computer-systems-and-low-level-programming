/*
 * Par Chea
 * January 27, 2022
 * CIS 2107 Section 4
 * Lab2 Revenue
 * "A program that calculate the revenue from a sale based on the price of each unity and quantity of the product that is inputted by the user."
 * "The program also have the discountrate if more quantity is entered."
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    double itemPrice, discountrate, discountamount, cost, tmp;
    int quantity;

    puts("\nWelcome to \"Temple\" store\n");


    printf("%s", "\tEnter item price: ");
    scanf("%lf", &itemPrice);

    if (itemPrice <= 0) {
        printf("%s", "\n\tThis is not a valid item price.\n");
        printf("%s", "\tPlease run the program again\n");
        puts("\nThank You for using the \"Temple\" store");
        exit(1);
    }

    printf("%s", "\tEnter quantity: ");
    scanf("%lf", &tmp);
    quantity = (int) tmp;
    if (quantity <= 0 || quantity != tmp) {
        printf("%s", "\n\tThis is not a valid quantity order.\n");
        printf("%s", "\tPlease run the program again\n");
        puts("\nThank You for using the \"Temple\" store");
        exit(1);
    }

    //discount
    if (quantity >= 1 && quantity <= 49)
        discountrate = 0;
    else if (quantity >= 50 && quantity <= 99)
        discountrate = 10;
    else if (quantity >= 100 && quantity <= 149)
        discountrate = 15;
    else if (quantity >= 150)
        discountrate = 25;

    cost = itemPrice * quantity;
    discountamount = (discountrate / 100) * cost;

    // Print output
    printf("\tThe item price is: $%.1lf\n", itemPrice);
    printf("\tThe order is: %d item(s)\n", quantity);
    printf("\tThe cost is: $%.1lf\n", cost);
    printf("\tThe discount is: %.1lf%%\n", discountrate);
    printf("\tThe discount amount is: $%.1lf\n", discountamount);
    printf("\tThe total is: $%.2f\n", cost - discountamount);
    puts("\nThank you for using the \"Temple\" store");
    exit(0);
}
