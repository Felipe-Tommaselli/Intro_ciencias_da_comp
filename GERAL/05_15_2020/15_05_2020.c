#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void par(char *st){

    printf("\n\nNo parametro par: "); puts(st); 
}

void ler(char *st){

    printf("\nDigite a string: "); 
    scanf(" %[^\n]%*c", st);
}

int main(){

    char string1[32];
    //scanf("%32[^\n]", string1);
    ler(string1);
    printf("\nstring: %s\n", string1);
    puts(string1);
    printf("\ndigite \"menu\" a qualquer momento para chamar a aba menu");
    printf("\nN= %li\n", strlen(string1));
    par(string1);
    
    return 0;
}