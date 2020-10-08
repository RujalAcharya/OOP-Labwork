/*
 *  WAP in C to add two complex numbers using the concept of structure.
*/

#include <stdio.h>


struct complex {
    int re;
    int imz;
} a, b, sum;


int main() {
    printf("Enter the real and imaginary part of 1st number: \n");
    scanf("%d%d", &a.re, &a.imz);
    printf("Enter the real and imaginary part of 2nd number: \n");
    scanf("%d%d", &b.re, &b.imz);
    sum.re = a.re + b.re;
    sum.imz = a.imz + b.imz;
    if (sum.imz < 0)
        printf("Sum = %d%di\n", sum.re, sum.imz);
    else
        printf("Sum = %d+%di\n", sum.re, sum.imz);
    
    return 0;
}