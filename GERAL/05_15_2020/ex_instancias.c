#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    
    char string1[32], string2[32], nome[32];
    printf("\nDigite o nome do arquivo: "); 
    scanf(" %[^\n]%*c", nome);
    printf("\nDigite a string1: "); 
    scanf(" %[^\n]%*c", string1);
    printf("\nDigite a string2: "); 
    scanf(" %[^\n]%*c", string2);
    FILE *file;
    file= fopen(nome, "r");
    
    if(file==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	    printf("Arquivo nao pode ser aberto");
	return -1;
    }

    
    return 0;
}