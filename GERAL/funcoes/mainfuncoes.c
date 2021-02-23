#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
//#include <conio.h>

	//1. fgets(x, 100, *file); le ate o caracter nulo, le mais q uma string por linha
	
	//2. stdin // ler o standard input q normalmente eh o teclado, isto eh, le oq sai do teclado
	
	//3. freopen("user//usp//prog", "r", stdin)  //redirecionar, igual a fopen so q nao so abre um txt como redireciona oq vc digita no teclado
	
	//4. getc e fgetc //pega so um caractere, mas num ciclo de repeti��o pode ler uma string //getc pode ser usada como MACRO
	
	//5. EOF (end of file) //ele faz o ciclo ser executado ate o fim do arqvo
	
	//6. feof(file) // recebe o ponteiro e retorna 0 se o arqvo n�o tiver sido terminado de ser lido  
	
	//7. fputc e putc // escrever um caractere no output
	
	//8. stdout  //tipo stdin so q a string sai no padrao de saida do console (terminal)
	
	//9. gets(x) //pega a string e armazena em um vetor x //se oq vc escreve for maior q o vetor ele pode crashar
	//   fgets ou gets_s ou ate scanf s�o mais seguros
	
	//10. puts("") //ele pega uma string �iteral e digita diretamente e ainda faz a quebra de linha //tipo printf so q pulando uma linha
	
	//11. x[i]= getchar() //pega a linha toda mas deixa lixo no buffer
	
	//12. fflush(stdin) //limpa o buffer do input //teoricamente quando foi escrito no terminal tem q usar stdout em vez de stdin
	
	//13. setbuf(stdin, NULL) //as vezes n funciona 
	
	//14. limparBuffer por fun��o //entre a 11 e a 12 � a mais eficiente
	
	//15. ftell(*file) // retorna em numeros a posi��o do arqvo
	
	//16. fread(vetor, sizeof(int), TAM, arq) //ler de um arquivo um blocos de bytes //retorna o numero de bytes // mais rapido q fprintf
	
	//17. fseek // realizar opera��es de leitura e escrita rand�mica
	
	//18. rewind // retornar para o inicio do arqvo 
	
	//19. remove //remove o arqvo do disco rigido //recebe o caminho pro arqvo e nao o ponteiro 
	
	//20. ferror // retorna 0 se nhm erro ocorreu envolvendo o arqvo
	
	//21. perror //print error // printa na tela o erro recebido pela ferror
	 
int main(int argc, char *argv[]) {
	
//Do 1 ao 3
	char x[100];
	
	FILE *file= fopen("converter.txt", "r"); //criamo o file o ponteiro q aponta no txt a funcionaliade
	
	fgets(x, 100, file);  // catamo a string do txt
	printf("\n%s", x);  //printamo a string catada     //usar fwrite � mais rapdido q fscanf 
	
	freopen("convertido.txt", "r", file);   //apontamos o ponteiro file pra convertido em vez de converter 
	
	fgets(x, 100, file);  // pegamo a string do txt again
	printf("\n%s", x);   // printamos novamente
	
//Do 4 ao 5

	char c[100];
	
	FILE *file2= fopen("lerdomodoarcacio.txt", "r");
	
	int i;
	while ((c[i] = fgetc(file2)) != EOF){  //ler a string c em todas as posicoes por causa do getc
	i++;								 //e como condi�ao de parada o fim do arquivo, melhor doq por '\n'
	}
	x[i]= '\0'; 						// se fosse sem o EOF e com stdin em vez de file no fgetc teria q por x[i++]
	
	printf("\n%s", c);

//Do 6 ao 7

	char s[]= " peripecia";
	
	FILE *file3= fopen("output.txt", "w");

	int j;
	while (s[j]!='\0'){
	putc(s[j], file3);  //informar caractere (a letra ou a posicao na string) e o ponteiro q aponta para o arqvo //altera o txt
	putc(s[j], stdout); //em vez d jogar no txt ele joga no terminal 
	j++;
	}

//Do 9 ao 11

	char w;
	printf("\n");
	while((w=getchar())!= '\n'){  //recebe os valores na variavel w
		putchar(w);			//mostra no terminar o valor de w
	}
	return 0;
}
// 13
	//criar uma funcao void pra limapr o buffer
	void limparbuffer(void){
		char c;
		while((c= getchar())!= '\n' && c!= EOF); //ele vai no buffer e fica pegando tdo caracter q tiver de ixo no buffer at� limpar tudo
	}