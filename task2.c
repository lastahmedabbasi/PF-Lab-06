#include <stdio.h>

int main() {
    int ticket_num, reversed_ticket_num = 0, no_of_digits = 0, temporary;

    printf("Enter your ticket number: ");
    scanf("%d", &ticket_num);

    temporary = ticket_num;

    do {
        no_of_digits += 1;
        temporary = temporary / 10;
    } while (temporary != 0);

    for (int i = 1; i <= no_of_digits; i++) {
        reversed_ticket_num = reversed_ticket_num * 10 + ticket_num % 10;
        ticket_num = ticket_num / 10;
    }

    printf("\nYour reversed ticket number is %d", reversed_ticket_num);

    return 0;
}
