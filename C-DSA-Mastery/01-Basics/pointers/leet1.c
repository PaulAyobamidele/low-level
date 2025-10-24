// roblem statement:
// Given a sorted array of integers (in ascending order) and an integer val, insert val into the array so that it remains sorted.
// Assume the array has enough capacity to hold one extra element.
#include <stdio.h>

int main () {
    int i, j, n, val, arr[20];


    printf("\n Enter your number of elements: ");
    scanf("%d", &n);

    for(i=0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    };

    printf("\nEnter the number to be inserted");
    scanf("%d", &val);


    for (i = 0; i < n; i++){
        if (arr[i] > val){
            for (j = n-1; j >= i; j -- ){
                arr[j + 1] = arr[j];
            };
            arr[i] = val;
            break;
        }
    }
    n = n + 1;
    for(i = 0; i < n; i++) {
        printf("\nThe value of arr[%d]: %d \n", i, arr[i]);
    }
    return 0;
}