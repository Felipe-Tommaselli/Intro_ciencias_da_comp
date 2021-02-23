#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 512

typedef struct{

    char *data_acesso;
    char *usuario;
    char *sistema;
}  log;

void recupera_logs(char nome_arqv[], log *log, int *tamanho_arqv ){

    FILE *arqv= fopen(nome_arqv, "r");

    if(arqv== NULL){
        printf("\nERRO NA ABERTURA DO ARQUIVO");
        exit(EXIT_FAILURE);
    }

    char linha[BUFFER_SIZE];
    
    int i=0;
    while(fgets(linha, BUFFER_SIZE, arqv)){    
        char *tokenlog= strtok(linha, ";"); //le ate essa quebra do 
        
        int j=0; 
        while(tokenlog!=NULL){
            switch (j){
            case 1: 
                (log+i)->data_acesso =strdup(tokenlog); 
                break;
            case 2: 
                (log+i)->usuario =strdup(tokenlog); 
                break;
            case 3: 
                (log+i)->sistema =strdup(tokenlog); 
                break;
            default:
                break;
            }
        tokenlog= strtok(NULL, ";");
        j++;
        }
    free(tokenlog);
    }
}

int main(int argc, char *argv[]){

    char nome_arqv[25];
    log *log;
    int tamanho_arqv;

    printf("\nDigite o nome do arquivo: "); scanf("%25[^\n]", nome_arqv);
    recupera_logs(nome_arqv, log, &tamanho_arqv);

    printf("\nUsuario encontrado");
    for(int i=0; i<tamanho_arqv; i++){
        if(strcmp((log+i)->data_acesso, "2020-23-05 10:20")== 0){
            printf("\n------------------------------------------");
            printf("\n\t Data acesso: %s", (log+i)->data_acesso);
            printf("\n\t Usuario: %s", (log+i)->usuario);
            printf("\n\t Sistema: %s", (log+i)->sistema);
            printf("\n------------------------------------------");
        }
    }
    return 0;
}