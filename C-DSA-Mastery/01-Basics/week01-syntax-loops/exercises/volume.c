// Write a program that computes the volume of a sphere with a 10-meter radius, using the for- mula v = 4/3πr3. Write the fraction 4/3 as 4.0f/3.0f. 
// (Try writing it as 4/3. 
// What hap- pens?) Hint: C doesn’t have an exponentiation operator, 
// so you’ll need to multiply r by itself twice to compute r3.



#include <stdio.h>

#define PI 22.0f/7.0f


int main(void){
    float radius;
    float volume;
    printf("Please enter your radius: ");
    scanf("%f", &radius);


    volume = ((4.0f/3.0f)* PI * radius * radius * radius);

    printf("The volume is: %.2f\n", volume);


    return 0;
}