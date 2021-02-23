#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tam(){
	int size;
	printf("\nDigite o tamanho maximo da frase a ser embaralhada por caracteres, como parametro vc pode tomar a frase\n\"Vo tranca o curso\" possui 17 caracteres");
	printf("\n\nCALMA CALMA, antes disso vamos fazer ums teste, digite uma frase qualquer(como menos de 50 caracteres) e eu vou te falar o numero de caracteres dela: "); 
	char teste[50];
	fgets (teste, 50, stdin); printf("\n A frase digitada possui %d caracteres",strlen(teste)-1); //tem que tira o '\0' //strlen le o numero d caracteres
	printf("\nAgora que vc ja ta o bala digita o tamanho maximo da frase que vc deseja embaralhar: "); 
	scanf("%i", &size);
	size++;
	return size;
}

char *embaralhar(char palavra[], int TAM){
	char pronta[TAM];
	int i;
	for( i=0; palavra[i]!='\0'; i++){
		pronta[i]= palavra[TAM-i-1];
	} pronta[i]= '\0';
	printf("\t>>>>>>>>>>>%s", pronta);
return pronta;	
}

int main(int argc, char *argv[]) {
int TAM= tam(); 
system("cls");
setbuf(stdin, 0);

char palavra[TAM], resp[TAM];
printf("Maravilha, agora eh o momento, de separar os meninos dos homens, digite a frase que sera embaralhada:\n"); 
fgets (palavra, TAM, stdin); 

resp[TAM]= embaralhar(palavra, TAM);
printf("\nA palavra embaralhada ficou \"%s\"", resp);
	return 0;
}
