#include <stdio.h>

int main()
{
    char word[100], original[100];
    int length = 0, vowels = 0, consonants = 0;
    int i, palindrome = 1;

    printf("Enter a word: ");
    scanf("%99s", word);

    while (word[length] != '\0') {
        original[length] = word[length];
        length++;
    }
    original[length] = '\0';

    for (i = 0; i < length; i++) {
        switch (original[i]) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;
            default:
                consonants++;
            }
        }

    for (i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - 1 - i];
        word[length - 1 - i] = temp;
    }

    for (i = 0; i < length; i++) {
        if (original[i] != word[i]) {
            palindrome = 0;
            break;
        }
    }

    printf("Original word: %s\n", original);
    printf("Length: %d\n", length);
    printf("Reversed word: %s\n", word);
    printf("Palindrome: %s\n", palindrome ? "Yes" : "No");
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
