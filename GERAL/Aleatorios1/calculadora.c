#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

   
    float a, a1, a2, b, A;
    scanf("%f %f", &a, &a2, &b);
    a=a1-a2;
    A= a1*a-pow(b,2);
    printf("\nA= %.2f", A); 

    return 0;
}