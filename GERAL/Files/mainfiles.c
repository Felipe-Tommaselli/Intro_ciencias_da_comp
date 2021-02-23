#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

FILE *file; // criou um ponteiro do tipo file 

file= fopen("teste.txt", "w"); //passou para a funcap fopen o nome, o local(pasta com o resto do programa) e a funcionalidade write nele

if(file==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	printf("Arquivo nao pode ser aberto");
	return 0;
}
	
fprintf(file, "what a time to be alive");  //printf de file (fprintf) no ponteiro com uma frase 
fclose(file); //comand para salvar qndo fechar o txt

////////

FILE *file2; // outro file

if(file2==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	printf("Arquivo nao pode ser aberto");
	return 0;
}
	
file2= fopen("teste2.txt", "r"); //passou para a funcap fopen o nome, o local(pasta com o resto do programa) e a funcionalidade read nele	
int x, y, z;
fscanf(file2, "%i%i%i", &x, &y, &z); // le o txt pre setado com os valores
printf("%i%i%i", x, y, x); // printa no terminal // eu pus tudo junto pq sou doente apenas
fclose(file2); //comand para salvar qndo fechar o txt

///////

FILE *file3;
file3= fopen("string.txt", "r");

if(file3==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	printf("Arquivo nao pode ser aberto");
	exit(0);
}
char frase [100];  //string q ta no txt
printf("\n");
while (fgets(frase, 100, file3)!=NULL) //ciclo pra percorrer todas as linhas com funcao fgets pra pegar varias strings em uma so linha
	printf("%s", frase);  

fclose(file3);
printf("\n");
	
///////
	
FILE *file4;
file4= fopen("string2.txt", "a");

if(file4==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	printf("Arquivo nao pode ser aberto");
	exit(0);
}
fprintf(file4, "\nPrimeira linha\n");  //padrao 
	
char frase2[]= "Segunda linha";  
fputs(frase2, file4);   //vai anexar o segunda linha toda vez q compilarem o programa
	
char c='3';
fputc(c, file4);  // o c tbm
fclose(file4); 
	
return 0;
}
