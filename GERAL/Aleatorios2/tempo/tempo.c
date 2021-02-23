#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main(){

    time_t init, fim;

    init= time(NULL);

    long int soma=0, N= 100000;
    while(N>0){

    soma+= N;
    N--;
    }
    fim= time(NULL);

    time_t tempo_percorrido = fim - init;
    printf("\nTempo de execução: %ld\n", tempo_percorrido);
     return 0;
 }