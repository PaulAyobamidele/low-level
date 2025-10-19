#include <stdio.h>


int main(void){
    int i, n, arr[100], large, second_large;

    printf(" \n Enter the array you want: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("\n Enter the elements: ");
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for (i=1; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
        };
    }
    second_large = arr[1];
    for (i = 0; i < n; i++){
        if (arr[i] != large){
            if(arr[i] > second_large){
                second_large = arr[i];
            };
        }
    }
    printf("\n The largest number is %d", large);
    printf("\n The second_largest number is %d", second_large);


    return 0;
}