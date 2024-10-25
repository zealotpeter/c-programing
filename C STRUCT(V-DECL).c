#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 30
#define MAX_AUTHOR_LENGTH 30
#define MAX_ISBN_LENGTH 14 // 13 characters + 1 for null terminator

// Define the structure Book
struct Book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int publication_year;
    char ISBN[MAX_ISBN_LENGTH];
    float price;
};

int main() {
    // Declare and initialize a variable of structure type Book
    struct Book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "745365665646",
        49.99
    };

    // Print the values of the fields
    printf("Book Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
