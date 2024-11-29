#include <stdio.h>
struct Book {
    char title[50];
    char author[50];
};

struct Library {
    struct Book book;
    int rackNumber;
};

int main() {
    struct Library lib;
    printf("Enter book title: ");
    scanf("%s", lib.book.title);
    printf("Enter author name: ");
    scanf("%s", lib.book.author);
    printf("Enter rack number: ");
    scanf("%d", &lib.rackNumber);
    printf("\nLibrary Details:\n");
    printf("Book Title: %s\n", lib.book.title);
    printf("Author: %s\n", lib.book.author);
    printf("Rack Number: %d\n", lib.rackNumber);
    return 0;
}

