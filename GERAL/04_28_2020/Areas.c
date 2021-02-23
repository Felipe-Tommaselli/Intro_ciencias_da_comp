#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#define Pi 3,1415

void ler(float *r){
    printf("Dgite o raio do circulo: ");
    scanf("%f", r);
}

void circulo(float r){
    int i,j; 
    char c= 'o';
    for(i=-r;i<r;i++){
        for (j = -r; j < r; j++) {

            if(i*i+j*j<r*r) 
                printf("%c",c);
            else    printf(" ");
        }
        printf("\n");
    }
}

void calc_circulo(float r, double *area, double *perimetro){
    const float Pi= 3.1415;
	*area= Pi*pow(r,2);
    *perimetro= 2*Pi*r;
}

int main(){
  	
  	float r;
    double area, perimetro;
    ler(&r);
    circulo(r);
	calc_circulo(r, &area, &perimetro);
	printf("\nA area vale: %.2f\nO perimetro vale: %.2f", area, perimetro);
	
}
