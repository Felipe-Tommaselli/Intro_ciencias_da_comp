#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
	float num;
    char nome[32];

	if (argc <= 1) {
		printf("Digite o nome de um arquivo binario para ser lido: \n");
        scanf("%s[^\n]", nome);
	}

	FILE *fp = fopen(argv[1], "rb");
	if (fp == NULL) {
		printf("Erro ao abrir arquivo\n");
		return -1;
	}

	while (fread(&num, sizeof(float), 1, fp) != 0) {
		printf("%.2f\n", num);
	}

	fclose(fp);
	
	return 0;
}