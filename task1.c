#import <stdio.h>

int main() {
    int pin, sum=0;
    printf("Enter your pin.\n");
    scanf("%d", &pin);

    for (int i = 1; i<=4: i++){
        sum = sum + (pin % (10**i));
    }

    if (i > 10)
        printf("\nStrong Password\n");
    else
        printf("\nWeak Password\n");


}
