#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){

    float vet1[]= {3.5, 8.6, 19.2, 38.45, 86.2, 22.3, 99.1};
    float vet2[]= {1.4, 5.8, 14.3, 19.1, 11.0, 0.1, 92.1};

    FILE* fp1 = fopen("arquivo1.dat", "wb");
    FILE* fp2 = fopen("arquivo2.dat", "wb");

    if(fp1== NULL || fp2== NULL){
    printf("\nErro ao abrir o arquivo\n");
    return 1;
    }

    fwrite(vet1, sizeof(float), 7, fp1);
    fwrite(vet2, sizeof(float), 7, fp2);

    fclose(fp1);
    fclose(fp2);
return 0;
}