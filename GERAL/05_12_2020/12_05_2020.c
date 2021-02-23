#include <stdio.h>
#include <stdlib.h>

//recursao, argumentos e cabeçalho
int main(int argc, char *argv[]){

printf("argc= %d\n", argc);
for(int i=0; i<argc; i++)
    printf("argv[%d]= %s\n", argv[i]);
return 0;
}