// Write a program to find the mean of n numbers using arrays

// Create an array by taking n numbers as input from the user
// find the length of the array
// calculate the sum of the elements in the array
// divide the sum by the length of the array to get the mean
// print the mean


#include <stdio.h>



int main(){
    int i, n, arr[100];
    float sum = 0.0, mean;

    printf("\n Enter the number of elements in the array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf(" Enter element for index %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf(" The elements in the array are: \n");
    for( i = 0; i < n; i++){
        printf(" Element at index %d: %d\n", i, arr[i]);
        sum += arr[i];
    }
    printf("The mean is: %.2f\n", sum / n);
    return 0;
}