#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 1. sizeof(x) // mostra o tamanho em bytes do operador 

// 2. malloc(sizeof(x)) // memory allocation // aloca o tanto de memoria, dinamicamnte, q eu precisar  // impede stack overflow

// 3. free(p) // //desaloca a memoria alocada na malloc pra n ficar segurando memoria atoa //desaloca mas n limpa oq estava la

// 4. calloc() // tbm aloca a memoria igual malloc deixando tudo 0, sem lixo // tem q por o tanto qv qr


int main(int argc, char *argv[]) {

//1.
int i;
printf("\ndouble: %li", sizeof(double));  //qualquer variavel double tem 8 bytes
printf("\nint: %li", sizeof(i)); //int tem 4 bytes

//2.

int *p= (int *)malloc(sizeof(int));	 //ele alocou dinamicamente um espaco de memoria do tipo int pro ponteiro 
*p= 100;   //malloc n limpa lixo    //o sizeof � so pra facilita e n�o precisa colocar o valor absouto
printf("\n*p= %i, com malloc", *p);		  		   //tem q ter conversao de tipo pq a malloc retorna um ponteiro void	 
	
if (p== NULL){
	printf("Nao tem memoria suficiente para a funcao Malloc alocar");				
	return 0; //mata o programa 
}
//3.

free(p); //desaloca a memoria de *p pra n ocupar espaco atoa

printf("\n*p= %i, depois do free", *p);	// o ponterio *p continua existindo so q nao valendo 100 

//4.

int *m= (int *)calloc(5, sizeof(int)); //um vetor com 5 posições
*m= 100;
printf("\n*m= %i, com calloc", m[0]); //pode por *m+1.. pra acessar todo o vetor // m[1] tbm
	return 0;
}
