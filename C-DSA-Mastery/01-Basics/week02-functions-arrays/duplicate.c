// Write a program to find whether the array of integers contains a duplicate number

// Define our variables
// Determine how many elements in the array
// Prompt user to enter every single element of the array
// Check for duplicate in the array
// Flag it 
// Print the number of flag








#include <stdio.h>

int main (void) {
    int i, j, n, flag, arr[20];

    printf("\n Enter your length of array: ");
    scanf("%d", &n);

    for(i=0; i < n; i++){
        printf("\n Enter a number: ");
        scanf("%d", &arr[i]);
    };


    flag = 0;
    for(i=0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                flag++;
            };
        };
        }
    if (flag > 0){
        printf("\n The array contains duplicate numbers. \n");
        printf("\n The number of the duplicates found is %d \n", flag);
    } else {
        printf("\n The array does not contain duplicate numbers. \n");

    }
    return 0;
}
