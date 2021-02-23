#include <stdio.h>
#include <stdlib.h>

//alocação dinamica 

int main(){
     
    int N; 
    printf("Digite o numero de caracteres para serem digitados: "); scanf("%i", &N);
    char string[N];
    //string[N]= ( char*)malloc(N*sizeof(char));
    
    printf("\nDIgite a palavra: "); fflush(stdin);
    scanf("%s", string); fflush(stdin);

    int j=0;
    for(int i=N; i>0; i--){
        string[i]=string[j];
    j++;
    }    
    printf("\nA string final ficou assim: %s\n", string);
    //free(string[N]);
    return 0; 
}