// #include <stdio.h>


// int main(void)
// {
//     int height = 8, length = 12, width = 10;
//     int volume, weight;
//     volume = height * length * width;
//     weight = (volume + 165) / 166;

//     printf("Dimensions: %dx%dx%d\n", length, width, height);
//     printf("Volume (cubic inches): %d\n", volume);
//     printf("Dimensional weight (pounds): %d\n", weight);
// }


#include <stdio.h>

int main(void){
    int height, length, width, volume, weight;

    printf("Enter height of box: ");
    scanf("%d", &height);
    printf("Enter lengthh of box: ");
    scanf("%d", &length);
    printf("Enter width of box: ");
    scanf("%d", &width);
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

    return 0;
}