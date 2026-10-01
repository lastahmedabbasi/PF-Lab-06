#include <stdio.h>

int main() {
    int book_code, reversed_book_code = 0;
    int no_of_digits = 0, temporary;

    printf("Enter your book code: ");
    scanf("%d", &book_code);

    temporary = book_code;

    do {
        no_of_digits += 1;
        temporary = temporary / 10;
    } while (temporary != 0);

    temporary = book_code;
    
    for (int i = 1; i <= no_of_digits; i++) {
        reversed_book_code = reversed_book_code * 10 + temporary % 10;
        temporary = temporary / 10;
    }

    if (book_code == reversed_book_code)
        printf("Book code is valid");
    else
        printf("Book code is not valid");

    return 0;
}
