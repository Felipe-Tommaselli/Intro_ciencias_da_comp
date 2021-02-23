#include <stdio.h>
#include <stdlib.h>
#define TAM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int id;
	int nota;
} alunos;

void Maior(alunos a[], int *maior){
	*maior=0;
	for (int i=0; i<10; i++){
		if (a[i].nota > *maior)
		*maior= a[i].nota;
		}
}
void repetida(alunos a[], int *nrep){
	*nrep= 0;
	for (int i=0; i<10; i++){
		for(int p=0; p<10; p--){
			if(a[i].nota== a[p].nota){
			i-=1;
			++*nrep;
			}
		}
	}
	printf("%i", *nrep);
}	

int main(int argc, char *argv[]) {

alunos a[10];
int maiornota;
int nrepetidas;

for(int i=0; i<10; i++){
a[i].id= rand()%10;
a[i].nota= rand()%10;
}

for(int i=0; i<10; i++){
	printf("\nO aluno %i tirou %i na prova", a[i].id, a[i].nota);
}

Maior(a, &maiornota);
printf("\nA maior nota foi %i", maiornota);

repetida(a, &nrepetidas);
printf("\nForam %i notas repetidas", nrepetidas);
	return 0;
}
