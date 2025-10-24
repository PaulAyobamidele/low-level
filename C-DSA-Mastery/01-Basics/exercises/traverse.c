#include <stdio.h>


int main(void){
    int i, n, sum, arr[20];

    printf("\n Enter the length of your array: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++){
        printf("\n Enter each of the calues of the array: ");
        scanf("%d", &arr[i]);
    };

    sum = 0;

    for (i = 0; i < n; i++){
        sum += arr[i];
    }

    printf("The final sum is %d", sum);

    return 0;

}