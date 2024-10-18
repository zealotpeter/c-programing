#include <stdio.h>

// Function to calculate the total bill
float calculateBill(int units) {
    float totalBill = 0.0;

    // Calculate the bill based on the units consumed
    if (units <= 199) {
        totalBill = units * 1.20;
    } else if (units >= 200 && units < 400) {
        totalBill = units * 1.50;
    } else if (units >= 400 && units < 600) {
        totalBill = units * 1.80;
    } else if (units >= 600) {
        totalBill = units * 2.00;
    }

    // Apply surcharge if totalBill exceeds 400 Ksh
    if (totalBill > 400) {
        totalBill += totalBill * 0.15; // Add 15% surcharge
    }

    // Ensure minimum bill is Ksh 100
    if (totalBill < 100) {
        totalBill = 100;
    }

    return totalBill;
}

int main() {
    int customerID, unitsConsumed;
    char customerName[50];
    float totalBill = 0.0;

    // Prompt user for inputs
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Call the calculateBill function to get the total bill
    totalBill = calculateBill(unitsConsumed);

    // Display the result
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Total Bill (with surcharge and minimum bill if applicable): Ksh %.2f\n", totalBill);

    return 0;
}
