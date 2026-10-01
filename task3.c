#include <stdio.h>

int main(){

    /* 
    Quesition says that there are 30 studnets but question also states that the loop should run foor 15 iterations only
    which is a contridiction so an assumption is made that the original question meant got 15 students instead of 30 students 
    */
    
    int present=0, absent, isPresent;

    for(int i=1; i<=15; i++){
        printf("Is student %i present? 1 for yes, 0 for no", i);
        scanf("%d",&isPresent);

        if (isPresent)
            present += 1;
    }

    absent = 15 - present;

    printf("Total Present: %d\nTotal Absent: %d", present, absent);

    return 0;
}
