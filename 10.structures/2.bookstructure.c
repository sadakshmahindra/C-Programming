#include <stdio.h>
#include <string.h>

// It's better to define structures outside main
struct book {
    char bookname[100];
    float price;
    int no_of_pages;
};

int main() {
    struct book book1;

    // Use strcpy to assign string to char array
    strcpy(book1.bookname, "Alice in the wonderland");
    book1.price = 250.50;
    book1.no_of_pages = 150;

    printf("Book Name: %s\n", book1.bookname);
    printf("Price: %f\n", book1.price);
    printf("Number of Pages: %d\n", book1.no_of_pages);

    return 0;
}

/*
** Why we use strcpy() **

In C, you cannot assign a string to a character array using the '=' operator
after it has been declared. The array's name (book1.bookname in this case)
acts as a constant pointer to its first element, and its address cannot be changed.

The line `book1.bookname = "some string";` is an error because it tries to
re-point `book1.bookname` to the new string literal, which is not allowed.

The `strcpy()` function from `<string.h>` provides the correct solution. It
copies the content of the source string into the destination array, character
by character, until the null terminator ('\0') is reached. This modifies the
content of the array itself, rather than trying to change where it points.
*/