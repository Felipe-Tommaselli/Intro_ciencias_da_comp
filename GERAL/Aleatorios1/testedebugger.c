#include <stdio.h>
#include <stdlib.h>

int main(){

    int *v= (int *)malloc(3*sizeof(int));
    //int v[3];
    /*so funciona com o vetor declarado dinamicamente, para fazer a realocaçao de memoria, a memoria ""antiga"" nao pode
    ser estatica */
    
    //int *p= (int *)malloc(sizeof(int));
    int *p;
        // nao importa se o ponteiro ta alocao dinamicamente ou nao, desde que o vetor esteja, tudo numa boa
    p= v;
    
    v[0]= 10;
    p[1]= 20;
    *(p+2)= 30;
        //tudo a msm coisa

    int *p_new= (int *)realloc(p, sizeof(int)*4);

    for(int i=0; i<3; i++)
        printf("\nv[%i]= %i", i, v[i]); //printei  veotr antigo pra compara com o novo

    printf("\n");

    //p_new[3]= 40;
    *(p_new + 3) = 40;

    for(int j=0; j<4; j++)
        printf("\np_new[%i]= %i", j, p_new[j]);
    printf("\n");

    return 0;
}