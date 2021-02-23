#include <stdio.h>

float adicao(float a,float b){
  float res;
  res= a+b;
  return res;
}

float subtracao(float a,float b){
    float res= a-b;
	return res;
} 
float mult(float a,float b){
  float res= a*b;
  return res;
}
float divisao(float a,float b){
	float res= a/b;
	b= 0? printf ("OPERACAO INVALIDA!") : res= a/b;
	return res;
}

int main (){
float x, y, resultado; 
int  indice;
printf("\nDigite a operacao dsesjada:\n1. adicao\n2.subtracao\n3.produto\n4.divisao\n>>");
scanf("%d", &indice);
printf("\ndigite x e y:");
scanf("%f %f", &x,&y);

switch (indice){
case 1:
	resultado= adicao ( x, y);
	break;
case 2: 
	resultado= subtracao(x,y);
	break;
case 3:
	resultado= mult( x, y);
	break;
case 4:
	float resultado= divisao(x, y);
	break;
}
printf("\n>>>> %.2f <<<<\n", resultado);
return 0;
}
