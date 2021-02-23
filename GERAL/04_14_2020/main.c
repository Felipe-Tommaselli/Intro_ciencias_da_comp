#include <stdio.h>
//#include <string.h>
#include <stdlib.h>
//#include <math.h>
#include <time.h>
#define TAM 3

void printM(int M[][TAM]){
	printf("matriz A:\n");
	for (int i=0; i<TAM; i++){
  		for (int j=0; j<TAM; j++){
			printf("%d ",M[i][j]);
		}printf("\n");
	}
}

void printT(int T[][TAM]){
		printf("\nmatriz B:\n");
	for (int i=0; i<TAM; i++){
  		for (int j=0; j<TAM; j++){
			printf("%d ",T[i][j]);
		}printf("\n");
	}
}

int Verif(int M[][TAM], int T[][TAM]){
int teste;
for (int i=0; i<TAM; i++){
  for (int j=0; j<TAM; j++){
    if (M[i][j]==T[i][j])
    teste= 1;
    else{
    teste= 0;
	break;
	}
  }
}
return teste;
}


int main(int argc, char *argv[]) {
int M[TAM][TAM], T[TAM][TAM], res;
srand(time(NULL));
for (int i=0; i<TAM; i++){
  for (int j=0; j<TAM; j++){
  	M[i][j]= rand()%30;
  	T[i][j]= rand()%30;
	}
}
 printM(M);
printT(T);

res= Verif(M,T);
res==1? printf("\nAs matrizes sao iguais") :printf("\nAs matrizes NAO sao iguais");

	return 0;
} //ish
