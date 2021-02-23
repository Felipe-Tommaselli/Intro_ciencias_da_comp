#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{   // Cria uma STRUCT para armazenar os dados do horario
int hora; //campo horas
int minutos; //campo minutos
int segundos;  //campo segundos
} horario;  // Define o nome do novo tipo criado


void ler (horario h[5]){   //ler os valores do vetor h[5] do tipo horario 
	for (int i=0; i<5; i++){
		printf("\nDigite o %i horario (hh:mm:ss): ", i+1); 
		scanf("%d %d %d", &h[i].hora, &h[i].minutos, &h[i].segundos);
		}
}
void mostrar(horario h[5]){  // printar os valores do vetor h[5] do tipo horario 
	for (int i=0; i<5; i++)
		printf("\nO %i horario eh (%d:%d:%d)", i+1, h[i].hora, h[i].minutos, h[i].segundos);
}

int main(int argc, char *argv[]) {
horario P[5]; //p[5]==h[5]
ler(P);
mostrar(P);

	return 0;
}
