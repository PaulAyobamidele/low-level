// Write a program to read and display n numbers using an array.


#include <stdio.h>


int main(){
    int i, n, arr[20];
    printf("Enter the nuumber of elements in the array:");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("Enter element for each index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements in the array are: \n");
    for (i=0; i<n; i++){
        printf("Element at index %d: %d\n", i, arr[i]);
    }
}