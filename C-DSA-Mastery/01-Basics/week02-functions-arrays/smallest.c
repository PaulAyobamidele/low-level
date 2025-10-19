// Write a program to find the smallest element in an array of n numbers using arrays.


// Define variables and types of the variables
// 
// 


#include <stdio.h>


int main(void){
    int i, n, arr[100], smallest;

    printf("\n Enter the number of elements in the array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf(" Enter element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
        } else {
            continue;
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);
    return 0;
}