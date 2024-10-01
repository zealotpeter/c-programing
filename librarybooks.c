#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int charges = 0;

    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    
    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 0) {
        printf("The book is returned on time or early. No charges.\n");
    } else if (daysOverdue <= 7) {
        charges = daysOverdue * 20;
    } else if (daysOverdue <= 14) {
        charges = (7 * 20) + ((daysOverdue - 7) * 50);
    } else {
        charges = (7 * 20) + (7 * 50) + ((daysOverdue - 14) * 100);
    }

    printf("Book ID: %d\n", bookID);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Total Charges: Ksh. %d\n", charges);

    return 0;
}
