#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100 // Maximum number of books that can be stored in the library

// Define structure for book details
struct Book {
    char title[50];
    char author[50];
    int pages;
};

// Function prototypes
void addBook(struct Book library[], int *count);
void displayBooks(struct Book library[], int count);
void listBooksByAuthor(struct Book library[], int count);
void listBookCount(int count);

int main() {
    struct Book library[MAX_BOOKS]; // Declare an array of structures to store book details
    int choice, count = 0; // Variable to store user choice and count of books

    // Menu-driven loop
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book Details\n");
        printf("2. Display Book Details\n");
        printf("3. List All Books by Author\n");
        printf("4. List Book Count\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &count);
                break;
            case 2:
                displayBooks(library, count);
                break;
            case 3:
                listBooksByAuthor(library, count);
                break;
            case 4:
                listBookCount(count);
                break;
            case 5:
                printf("Thank you for using the Library Management System!\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to add book details to the library
void addBook(struct Book library[], int *count) {
    if (*count == MAX_BOOKS) {
        printf("Maximum number of books reached. Cannot add more books.\n");
        return;
    }

    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[*count].title);
    printf("Enter Book Author: ");
    scanf(" %[^\n]", library[*count].author);
    printf("Enter Number of Pages: ");
    scanf("%d", &library[*count].pages);

    (*count)++;

    printf("Book details added successfully!\n");
}

// Function to display all book details in the library
void displayBooks(struct Book library[], int count) {
    if (count == 0) {
        printf("No books available in the library.\n");
        return;
    }

    printf("Book Details:\n");
    for (int i = 0; i < count; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Pages: %d\n", library[i].pages);
        printf("--------------------\n");
    }
}

// Function to list all books by a given author
void listBooksByAuthor(struct Book library[], int count) {
    if (count == 0) {
        printf("No books available in the library.\n");
        return;
    }

    char author[50];
    printf("Enter Author Name: ");
    scanf(" %[^\n]", author);

    int found = 0; // Flag to check if
