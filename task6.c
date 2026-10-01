#include <stdio.h>

int main() {
    int reading, temporary;
    int no_of_even = 0, no_of_odd = 0;
    int no_of_digits = 0;

    printf("Enter your electric reading: ");
    scanf("%d", &reading);

    temporary = reading;

    do {
        no_of_digits += 1;
        temporary = temporary / 10;
    } while (temporary != 0);

    for (int i = 1; i <= no_of_digits; i++) {

        if (!(reading % 2))
            no_of_even += 1;
        else
            no_of_odd += 1;

        reading /= 10;
    }

    printf("\nNumber of digits even: %d\nNumber of digits odd: %d", no_of_even, no_of_odd);
    
    return 0;
}
