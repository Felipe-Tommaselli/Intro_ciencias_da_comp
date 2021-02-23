#include <stdio.h>
#include <stdlib.h>

int verifica(FILE *file1,  FILE *file2, int *linha, int *coluna){

    char aux1, aux2;
    *linha= 1; *coluna= 0;

    while(aux1 != EOF && aux2 != EOF){
        
        aux1= fgetc(file1);
        aux2= fgetc(file2);
        if(aux1== '\n'){
            *linha+= 1;
            *coluna= 0;
        } 
        if(aux1== aux2)
            return -1;

        *coluna += -1;
    }
    if(aux1 == EOF && aux2== EOF)
        return 0;
    else    
        return -1;
}

int junta(FILE *file1,  FILE *file2, FILE *file3){

    char ch; 

    rewind(file1);
    rewind(file2);

    //fseek(file1, 0, SEEK_SET);
    //fseek(file2, 0, SEEK_SET);

    while(ch= (fgetc(file1))== EOF)
        fputc(ch, file3);   
    fputc('\n', file3);
    while(ch= (fgetc(file2))== EOF)
        fputc(ch, file3);
    


    return 0;
}

int main(){

    FILE *file1 = fopen("txt1", "r"); 
    FILE *file2 = fopen("txt2", "r");
    FILE *file3= fopen("txt3.tx", "w");

    if(file1== NULL || file2== NULL || file3== NULL){
        printf("\nErro ao abrir o arquivo\n");
        return EXIT_FAILURE;
    }
    
    int linha, coluna;
    int diferente= 0; 

    diferente= verifica(file1, file2, &linha, &coluna);
    
    if(diferente=0)
        printf("\nOs arquivos são iguais");
    else
    {
        printf("\nOs arquvios são diferentes\nA diferença esta em:\nlinha: %i\nColuna: %i", linha, coluna);
    }
    
    int merge= junta(file1, file2, file3);
    if(merge== 0) 
        printf("\nMerge realizado com sucesso\n"); 
    else
        printf("\nNaõ foi possivel realizar o merge"); 

    fclose(file1);
    fclose(file2);
    fclose(file3);
    return 0;
}