// Write a program to enter n number of digits. Form a nnumbber using tese digits.



// initialize the number with 0, i, numofDigits, digits
// number = number * 10 + digits




#include <stdio.h>

int main (void){
    int number = 0;
    int i, numofDigits, digits;

    printf("\n Enter the number of Digits: ");
    scanf("%d", &numofDigits);

    for (i = 0; i < numofDigits; i++){
        printf("\n Enter you number: ");
        scanf("%d", &digits);
        number = number * 10 + digits;
    }

    

    printf("\n The final number is : %d ", number);
    return 0;
}