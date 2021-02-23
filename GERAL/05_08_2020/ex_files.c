#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//arquivos


void ler2(int *N, char st[]){
    printf("\nDigite a frase (maximo de 64 caracteres):\n");
    scanf("%s[^\n]", *st);
    *N = strlen(st);
}

void tupperware(char *st, int N){
    printf("\n>>> antes: %s", *st);
    for(int i=0; i<N; i++)
        st[i]= toupper(st[i]);
    printf("\n>>> depois: %s", *st);
}

char *arquivo(char *st, int N){

    FILE *arqvo; 
   
    char nomearqvo[32];
    printf("\nDigite o nome do arquivo: ");
    scanf("%s", nomearqvo);
    arqvo= fopen(nomearqvo, "w");
    if(arqvo==NULL){   // invalida e mata o programa caso nao exista o txt mencionado 
	    printf("Arquivo nao pode ser aberto");
	return -1;
    }

    fputs(st , arqvo);
    fclose(arqvo);
    return 0;
}

int main(int argc, char *argv[]){
    //int N[5];
   // char st1[N][5];
   // ler1(N, st1);
    /* Nao entendi muito bem como vou fazer para ler 5 linhas com tamnhos diferentes, uma opção seria criar 5 strings
    com 5 tamanhos diferentes, mas nao acho que seja um metodo eficiente, caso fossem 50 frases esse metodo ja 
    nao seria viavel. tentei varias ideias, a ultima que tentei foi fazer uma matriz com oas 5 frases, porem nao obtive
    sucesso. qual o melhor jeito de fazer ess aparte?
    Creio que na parte dos files em si naovou ter muitos problemas, mas estoutravado nessas 5 strings, entao vou fazer
    o programa para 1 string e depois so adaptar se possivel para 5 frases.
    */

      /* Bom, como o programa só exige que você escreva as frases no arquivo e não existe nenhuma manipulação delas dentro
       * do programa, você pode usar apenas uma string para leitura, e a cada vez que ler uma string já escreve-la no arquivo.
       * Então realmente seria fazer o programa para 1 string, e depois só colar ele dentro de um loop.
       */

   int N=0;
   char st[64]; //outro problema q eu queria resolver é sobre o tamanhp da string
   /* Entendo que nao é muito vantajoso armazena 64 spacos de memoria e nao usa-los (como se o usuario digitasse oi)
   mas nao sei como utilizar o por exemplo a funcao strlen (tentei usar na linha 23) para armezar o numero de espacos
   corretos. Tentei dalocando a string dinamicamnete e tals porque vi num forum mas percebi que nao era bem o que eu 
   queria. 
   */

    // O tamanho da string não tem como você saber antes mesmo. Geralmente você tem que fazer uma análise do tamanho da entrada
    // que vai receber e alocar um espaço suficiente para (pelo menos) a maioria dos casos. Aqui no caso sugerimos 64 caracteres,
    // então esse é o tamanho máximo da string que o programa irá ler. Depois de lida, aí você pode fazer o que está fazendo na função
    // ler2 de ver seu tamanho pela função strlen, tá certinho. A funão strlen só vai funcionar depois que você já leu a string mesmo.
    // Caso aconteça isso que você comentou não tem jeito mesmo, esse espaço vai ser desperdiçado. O que você pode fazer é, como
    // comentado, ao invés de declarar 5 (ou 50) strings, declarar apenas uma e já fazer todas as operações com ela antes de ler 
    // a próxima para não ter que ficar guradando todas em RAM.


    //ler2(&N, st); 
    //printf("\nDigite a frase (maximo de 64 caracteres):\n");
    //scanf("%s[^\n]", st);
    //tupperware(st, &N);
    //N= strlen(st);
    for(int i=0; i<5; i++){  //repetir o ciclo pra cada frase
        ler2(&N, st); 
        N= strlen(st)+1;
        tupperware(st, N); 
        arquivo(N, st); 
        memset(st, 0, N); //limpar a string

    }



    return 0;
}