// The insertion algorithm in plain logic:

// Start from the end of the array (n - 1)

// Shift elements one position to the right until you reach the insertion position

// Place the new element at the desired position

// Increase the array size by 1



#include <stdio.h>


int main(void) {
    int i, n, num, pos, arr[20];

    printf("\n Enter the number of elements you want in the array");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\n Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n Enter the position where you want to insert the new element: ");
    scanf("%d", &pos);
    printf("\n Enter the new element to insert: ");
    scanf("%d", &num);

    for(i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = num;
    num += 1;
    printf("\n The array after insertion of %d is: ", num);
    for(i=0; i<n; i++)
        printf("\n arr[%d] %d", i, arr[i]);
    

    return 0;

}

