#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ler(char *st[]){
    printf("Digite a palavra para ser invertida: ");
   // scanf("%s[^\n]", st);
   scanf(" %[^\n]%*c", st);
}

char* inverter(char st[]){
    static int i=0;
    static char st_inv[32];

    if(*st== '\0') return st_inv;
    inverter(st++);
    st_inv[i++]= *st;
}

//recursao
int main(int argc, char *argv[]){

char string[32];
char *string_invertida; //msm coisa que por [50] so que com o msm espaco de 50

//ler(string);
printf("Digite a palavra para ser invertida: ");
getchar();
fgets(string, 32, stdin); 

string_invertida= inverter(string); 
printf("\nA string invertida ficou dessa forma: %s\n", string_invertida);
return 0;
}