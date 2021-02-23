#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int hr, min=20, seg=0;

int *phr= &hr; 
int *pmin= &min; 
int *pseg= &seg; 

*phr=10;

printf("\ndepois:(%i:%i:%i)", *phr, *pmin, *pseg);

///////////////////////////////////////////////

struct horario{
	int hor, minu, segu;
} ;

struct horario depois, *agora;
agora= &depois;


(*agora).hor= 30;

agora->minu= 33;

agora->segu= 2;

printf("\nagora:(%i:%i:%i)", depois.hor, depois.minu, depois.segu);
	return 0;
}
