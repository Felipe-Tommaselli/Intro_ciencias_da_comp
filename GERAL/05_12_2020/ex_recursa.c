#include <stdio.h>
#include <stdlib.h>

void Num(int *N){
    printf("Digite o numero para a somatoria: ");
    scanf("%i", N);
}

int rec(int N){
    int soma;
    if(N==1){
        return 1;
    } else{
        soma= N + rec(N-1);
    }
    return soma;
}

//recursao
int main(int argc, char *argv[]){
int N;
Num(&N);
int soma= N;
soma= rec(N);
printf("\nO Somatorio dos numeros de 1 ate N é %d\n", soma);
return 0;
}