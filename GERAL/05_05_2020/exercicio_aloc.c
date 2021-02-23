#include <stdio.h>
#include <stdlib.h>

void ler(int *linhas, int *colunas){  
    printf("Digite o numero de linhas e colunas:\nLinhas: ");
    scanf("%i", linhas);
    printf("Colunas: "); scanf("%i", colunas);
}

// Só um comentário dessa função: você pode passar o número de linhas e colunas por referência sim, sem problema, mas não vejo muita necessidade aqui.
// Enfim, é só um comentário mesmo, não tem problema algum fazer dessa maneira.
int **montar_matriz( int *linhas, int *colunas){ 
// eu nao entendi tambe o por que eu tive que usar int**, na minha cabeca eu so passaria o p normal ou p[linhas][colunas]

    /* Tá, aqui é o seguinte: como não temos a estrutura de matriz nativamente no C, pra alocar ela temos que fazer tipo uma "gambiarra"
     * tanto para alocação estática quanto dinâmica e temos duas opções:
     * > Uma opção é fazer alocação de um vetor mesmo e utilizá-lo como matriz, fazendo aritmética de ponteiros, mas essa opção pode ser um pouco confusa
     *      Um exemplo para uma matriz de 3x3 seria alocar um vetor de nove elementos e entender cada três elementos como uma linha.
     *      Então para acessar, por exemplo, o elemento do meio, o qual seria o quinto elemento do vetor, ou seja, vet[4], você teria que
     *      fazer mat[i + 3*j], com i = 1 e j = 1 (equivalente a mat[1][1]). Analisando o uso dessa tática com aloc. dinâmica, você poderia 
     *      utilizar o p normal (int*), porque nesse caso o p seria apenas o endereço para um vetor de int. 
     * > A outra opção, que é a que normalmente utilizamos, é a de aloca um vetor de vetores. Dessa forma, cada elemento 'vetor' do array de vetores
     *   será uma linha. 
     *      Utilizando o exemplo acima, quando declamaros uma matriz mat[3][3] estamos na verdade reservando o seguinte espaço na memória:
     *          Elemento 0: Vetor de três posições de inteiro
     *          Elemento 1: Vetor de três posições de inteiro
     *          Elemento 2: Vetor de três posições de inteiro
     *      Quando acessamos mat[1][1] o que estamos fazendo é acessar o elemento 1 (que é um vetor), e então acessando a posição 1 desse vetor.
     *      Por isso, quando vamos declarar em memória dinâmica, temos que utilizar int**. O que isso significa é que estaremos reservando um endereço
     *      (int*), que dentro dele conterá mais endereços (int**). Ou seja, quando for alocar na verdade tenho que fazer:
     *      int **p = (int**) malloc(numero de linhas * sizeof(int*)). Isso porque estamos alocando um vetor de ponteiro. 
     *      Depois, para cada ponteiro nesse meu vetor, ele vai receber um endereço de um novo vetor de inteiros que irei alocar (que serão os elementos).
     *      Então para cada ponteiro faremos p[i] = (int*) malloc(numero de colunas * sizeof(int)); Sendo assim, ainda seguindo o exemplo anterior, teremos:
     *          Elemento 0: Ponteiro p (int*) apontando para um vetor de três elementos do tipo int
     *          Elemento 1: Ponteiro p+1 (int*) apontando para um vetor de três elementos do tipo int
     *          Elemento 2: Ponteiro p+2 (int*) apontando para um vetor de três elementos do tipo int
     * Bom, desculpa o textão, não sei se ficou claro ou se deixei mais confuso, mas essa é a ideia do pq temos que utilizar o int**          
     */
   int **p= (int **)malloc(*linhas*sizeof(int ));  // Aqui então cada elemento deve ter o tamanho de um ponteiro de int (int*)
    /*se eu quisesse nao ter q usar o return e fazer tudo por ponteiros, eu poderia por ***p e passar o **p como parametro? eu fiz 
    alguns testes mas ele indica "erro de segmentação (imagem de nucleo gravada)",
     nao sei se tem algum jeito de fazer iso mas é mais por curiosidade doq necssidade
    */
   
    /* Pode sim, na verdade pra quem está começando a programar e começando a aprender C pode ser um desafio fazer isso, mas é possível sim.
    * inclusive grande parte da minha última prova de Icc I era manipular isso. Na verdade, depois que você entende a ideia de ponteiros e 
    * prática bastante, fica mais fácil. No seu caso, eu não sei dizer exatamente o que está dando o erro de segmentação, mas depois posso
    * fazer um código de exemplo pra você analisar e comparar com sua implementação. Ou se quiser também na próxima monitoria posso ficar um 
    * tempinho depois ou pegar o finalzinho da aula pra falar disso (só pq não sei se a turma teria tanto interesse em ver a matéria nessa
    * profundidade, apesar de eu achar muito interessante ter esse conhecimento). */
    for(int i=0; i<*linhas; i++)
        p[i]= (int *)malloc(*colunas*sizeof(int)); //declarei dinamicamente apontando para as colunas enquanto o for percorre as linhas
    
    for(int i=0; i<*linhas; i++){
        for(int j=0; j<*colunas; j++)
            p[i][j]= rand()%10;
    }
//return 0;
return p; 
} 

void printa( int *linhas, int *colunas, int **p){
  for(int i=0; i<*linhas; i++){
        for(int j=0; j<*colunas; j++)
            printf("%i ", p[i][j]);
        printf("\n");
    }
}

void usuario( int *linhas, int *colunas, int **p){
    int x, y;
    printf("\nMeu pequeno investidor, digite o que é pedido:\n");
    printf("O numero da ação: "); scanf("%i", &x);
    printf("A semana: "); scanf("%i", &y);
    x= x-1; y= y-1;
    printf("\nO valor da ação que voce queria consultar na semana escolhida é: %i\n", p[x][y]);
}

void diferenca( int *linhas, int *colunas, int **p, int *v){
    int a, b;
    printf("\nAgora, Digite as semanas para a subtracao das acoes delas (lembrando que só ha %i semanas): ", *colunas);
    printf("\nsemana a: "); scanf("%i", &a);
    printf("\nsemana b: "); scanf("%i", &b);
    a= a-1; b= b-1;
    for(int i=0; i<*linhas; i++)
        v[i]= p[i][a] - p[i][b];
}

int main(int argc, char *argv[]){
    
    int linhas, colunas;
    ler(&linhas, &colunas);
    system("clear");
    int **p;
    p =montar_matriz( &linhas, &colunas);
    printa(&linhas, &colunas, p); //sem & pq p ja é um ponteiro 
    usuario(&linhas, &colunas, p); 
    int v[linhas];
    diferenca(&linhas, &colunas, p, v);
    system("clear");
    printa(&linhas, &colunas, p);
    printf("\nA subtracao desejada ficou:\n");
    for(int i=0; i<linhas; i++)
        printf("%i ", v[i]);
    return 0;
}