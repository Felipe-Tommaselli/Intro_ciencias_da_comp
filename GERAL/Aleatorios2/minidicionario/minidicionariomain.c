#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
	char palavra[20];
	char definicao[50];
} dicionario;

bool compararstring(const char palavra1[], const char palavra2[]){
	int i;
	while ( palavra1[i]==palavra2[i] && palavra1[i]!='\0' && palavra2[i]!='\0' ){
		i++;
	if(palavra1[i]=='\0' && palavra2[i]=='\0')
	return true;
	else
	return false;
	}
}

int procurarstring(const dicionario lingua[], const char procurarpalavra[], const int numpalavras ){ //lingua eh nome da struct
	int i=0;
	bool compararstring(const char palavra1[], const char palavra2[]);
	while(i<numpalavras){
		
		if(compararstring(procurarpalavra, lingua[i].palavra))
			return i;
		else
		++i;
		}
return -1;
}

int main(int argc, char *argv[]) {
	const int NUMERODEFINICOES= 3;
	char palavra[20]={'\0'};
	int resultadopesquisa;
	
	const dicionario portugues [3]={ //portugeus eh o nome 
	{"bia","gorda"},
	{"desconjuro","Que foi alvo de exorcismo, que teve os espiritos malevolo"},
	{"Inexoravel","Que nao se corrompe por pedidos ou suplicas insistentes"}
	};
	printf("Digite uma palavra:"); scanf("%s", palavra);
	
	resultadopesquisa= procurarstring( portugues, palavra, NUMERODEFINICOES);
	
	if (resultadopesquisa!=-1)
		printf("%s\n", portugues[resultadopesquisa].definicao);
	else 
	printf("\nPalavra nao encontrada");
	return 0;
}





