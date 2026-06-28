#include<stdio.h>

int main() {
    int bookId;
    char bookName[50];
    char author[50];

    // Logic:
    // 1. Read Book ID, Book Name and Author Name.
    // 2. Display all entered details.
    // 3. #.This simulates adding a book to the library.

    printf("Enter Book ID");
    scanf("%d", &bookId);

    printf("Enter Book Name");
    scanf(" %[^\n]",bookName);

    printf("Enter Author Name");
    scanf(" %[^\n]",author);

    printf("\n----- Library Record -----\n");
    printf("Book ID : %d\n", bookId);
    printf("Book Name : %s\n", bookName);
    printf("Author : %s\n", author);

    
}