#include <stdio.h>

int main() {
    int number, fact_n=1, fact_2n=1, catalan_num;
    printf("Enter numver");
    scanf("%d",&number);

    for(int i=1; i <= number: i++){
        fact_n *= i;
    }

    for(int i=1; i <= (2*number): i++){
        fact_2n *= i;
    }

    catalan_num = fact_2n/((n+1)*(fact_n*2));

    printf("\nThe Catalan number of %d is %d", number, catalan_num);

    return 0;
}
