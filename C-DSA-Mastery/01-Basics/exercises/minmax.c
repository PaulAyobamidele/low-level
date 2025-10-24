// Find the largest and smallest elements in the array.

#include <stdio.h>

int main(){
    int i, n, j, max, min, arr[20];

    printf("\n Enter the length of your array: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++){
        printf("\n Enter each of the calues of the array: ");
        scanf("%d", &arr[i]);
    };

    max = min = arr[0];
    for (i = 0; i < n; i++){
        if (arr[i] > max){
            max = arr[i];
        };
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max is %d", max);
    printf("Min is %d", min);

    return 0;
}