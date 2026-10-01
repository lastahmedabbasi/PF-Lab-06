#include <stdio.h>
#include <stdlib.h>

int main(){
    int arr[8], smallest, largest;

    for(int i = 0; i < 8; i++){
        scanf("%d", &arr[i]);
    } printf("\n");

    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    } printf("\n");

    smallest = largest = arr[0];
    for(int i = 0; i < 8; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    } printf("Smallest: %d, Largest: %d\n", smallest, largest);

    printf("Enter a number to search: ");
    int search_num, index = -1;
    scanf("%d", &search_num);
    for(int i = 0; i < 8; i++){
        if(arr[i] == search_num){
            index = i;
            break;
        }
    }
    if(index != -1){
        printf("Number found at index: %d\n", index);
    } else {
        printf("Number not found\n");
    }

    printf("Enter a number to insert: ");
    printf("Enter the index to insert at (0-7): ");
    int insert_num, insert_index;
    scanf("%d %d", &insert_num, &insert_index);
    if(insert_index >= 0 && insert_index < 8){
        for(int i = 7; i > insert_index; i--){
            arr[i] = arr[i-1];
        }
        arr[insert_index] = insert_num;
    } else {
        printf("Invalid index\n");
    }

    printf("Final array: ");
    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    } printf("\n");

    printf("Enter the index to delete at (0-7): ");
    int delete_index;
    scanf("%d", &delete_index);
    if(delete_index >= 0 && delete_index < 8){
        for(int i = delete_index; i < 7; i++){
            arr[i] = arr[i+1];
        }
    } else {
        printf("Invalid index\n");
    }

    printf("Final array: ");
    for(int i = 0; i < 8; i++){
        printf("%d ", arr[i]);
    } printf("\n");

    return 0;
}
