#include <stdio.h>

int main(){
    int present=0, absent, isPresent;

    for(int i=1; i<=15; i++){
        printf("Is student %i present?", i);
        scanf("%d",&isPresent);

        if (isPresent)
            present += 1;
    }

    absent = 15 - present;

    printf("Total Present: %d\nTotal Absent: %d", present, absent);

    return 0;
}
