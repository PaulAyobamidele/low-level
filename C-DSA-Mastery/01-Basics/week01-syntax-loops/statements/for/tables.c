#include <stdio.h>

int main(void){
    int i, n;

    printf("Thhis prints squares. \n");
    printf("Enter a numer of entries in the table");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%10d%10d\n", i, i * i);
    };
    return 0;
}

