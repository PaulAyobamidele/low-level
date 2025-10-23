#include <stdio.h>

// #include <stdio.h>
// int main() {
//     int num = 10;
//     printf("Value of num: %d\n", num);
//     printf("Address of num: %p\n", &num);
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int a = 5, b = 10, c = 15;
//     printf("&a = %p, &b = %p, &c = %p\n", &a, &b, &c);
//     return 0;
// }


// int main () {
//     int x = 25;

//     printf("Address of x in decimal: %d\n", &x);
//     printf("Address of x in decimal: %x\n", &x);
//     printf("Address of x in decimal: %o\n", &x);
//     printf("Address of x in decimal: %p\n", &x);


//     return 0;

//     // %p is the correct, portable way to print address.

// }


// int main() {
//     int num = 20;
//     int *ptr = &num;


//     printf("Value of num: %d\n", num);
//     printf("Address of num: %p\n", &num);
//     printf("Value of ptr (address stored in it): %p\n", ptr);
//     printf("Value pointed by ptr: %d\n", *ptr);

//     return 0;
//      *ptr means "the value stored at the address inside ptr"
// }



// int main() {
//     int num = 30;
//     int *ptr = &num;


//     *ptr = 50;
//     printf("num  = %d\n", num);
//     printf("*ptr = %d\n", *ptr);
//     return 0;
// }

// Since *ptr means value at ptr, we can reassign the value in that object to another variable


// int main() {
//     int num = 10;
//     int *p;
//     // p = num;
//     p = &num;
//     printf("This is the memory %p", p);



//     return 0;
// }


// Pointer Visualization and Debugging

// Pointer to Pointer


// See how multi-level pointers work (like layers of indirection)
// int main(){
//     int num = 7;
//     int *p = &num;
//     int **pp = &p;

//     printf("num = %d\n", num);
//     printf("*p = %d\n", *p);
//     printf("**pp = %d\n", **pp);

//     return 0;
// }




// Notice that the pointer iteself also has its own memory address
// int main(){
//     int a = 5;
//     int *p;
//     p = &a;

//     printf("Address of a: %p\n", &a);
//     printf("Address of p: %p\n", &p);
//     printf("Value inside p (address of a): %p\n", p);
//     return 0;
// }


// NULL means - "points to nothing"
// int main() {
//     int *p;
//     p = NULL;
//     printf("p = %p\n", p);
//     if (p == NULL) {
//         printf("Pointer is null, not pointing anywhere.\n");
//     }

//     return 0;
// }


// *p means value stored at the address inside p.
// So we call it dereferencing. Deferencing a NULL pointer crashes the program.
// int main() {
//     int *p = NULL;
//     // printf("%d", *p);
//     return 0;
// }

// ARRAYS AND POINTERS
// Array and pointer connection

// int main() {
//     int arr[3] = {10, 20, 30};
//     printf("arr = %p, &arr[0] = %p\n", arr, &arr[0]);
//     return 0;
// }

// Array name is equal to the address of the first element


// int main() {
//     int arr[3] = {10, 20, 30};
//     int *p;
//     p = arr;
//     printf("%d %d %d\n", *p, *(p+1), *(p + 2));
//     return 0;
// }

// Understand pointer arithmetic with arrays



// int main () {
//     int arr[3] = {1, 2, 3};
//     int *p;
//     p = arr;
//     *(p + 1) = 10;
//     printf("%d %d %d\n", arr[0], *(p + 1), *(p + 2));
//     return 0;
// };



// int main () {
//     int arr[5] = {2,3,4,5,6};
//     for (int i = 0; i < 5; i++) {
//         printf("arr[%d] address: %p\n", i, &arr[i]);
//     }
//     return 0;
// }


// MEMORY AND TYPE CASTING
// Casting Integer to Pointer 

// int main () {
//     int num = 100;
//     // int *p = (int *) num;
//     printf("p = %p\n", p);

//     // *p = 5;
//     return 0;
// }


// int main () {
//     int x = 42;
//     void *vp;
//     vp = &x;
//     printf("Address: %p\n", vp);
//     printf("Value: %d\n", *(int*)vp);
//     // Here vp is a void pointer that can point to any data type
//     // But C can not directly dereference it, because it does not know the data type
//     // This is why we need typecasting (int*)

//     // so (int*)vp is now type int* (pointer to int)
//     // *(int*)vp means value at "(int*)vp"
//     return 0;
// }



// DYNAMIC MEMORY AND PRACTICE
// SIMPLE MALLOC EXAMPLE

#include <stdlib.h>

// int main() {
//     int *p;
//     p = malloc(sizeof(int));
//     *p = 99;
//     printf("Value: %d\n", *p);
//     free(p);
//     return 0;
// }


// int main() {
//     int n = 5;
//     int *arr = malloc (n * sizeof(int));

//     for (int i = 0; i < n; i++) {
//         arr[i] = i * 10;
//     }
//     for (int i = 0; i < n; i++){
//         printf("%d ", arr[i]);
//     }
//     free(arr);
//     return 0;
// }


// POINTER INCREMENT

// #include <stdio.h>
// int main() {
//     int arr[3] = {10, 20, 30};
//     int *p = arr;
//     printf("%d ", *p++);
//     printf("%d ", *p++);
//     printf("%d\n", *p);
//     return 0;
// }


int main() {
    int x = 5;
    int *p;
    p = &x;
    int **q;
    q = &p;

    printf("x = %d\n", **q);
    **q = 10;
    printf("x after change = %d\n", x);
    return 0;
}