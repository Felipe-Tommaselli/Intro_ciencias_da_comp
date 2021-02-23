#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
#define TAM 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Enche_v(int v[]){
	srand(time(NULL));
	for (int i=0; i<TAM; i++){
		v[i]= rand()%30;
	}
return v[TAM];
}

void printv(int v[]){
	printf("Vetor V:\n");
	for (int i=0; i<TAM; i++){
  		printf("  %d", v[i]);
  	}
}

int main(int argc, char *argv[]) {
int v[TAM];
int max1, max2;
v[TAM]= Enche_v(v);
printv(v);
	
	for (int i=0; i<TAM; i++){
		if(v[i]>max1){
			max2= max1;
			max1= v[i];
		} else if(v[i]>max2 && v[i]< max1){
			max2= v[i];
		}
			
	}
printf("\nO maior numero eh %d\n", max1);
printf("O segundo maior eh %d", max2);
return 0;
}
