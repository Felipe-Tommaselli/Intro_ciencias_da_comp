#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]){

FILE* fp1 = fopen("arquivo1.dat", "rb");
FILE* fp2 = fopen("arquivo2.dat", "rb");

FILE* fp3 = fopen("arquivo3.dat", "wb");

if(fp1== NULL || fp2== NULL || fp3== NULL){
    printf("\nErro ao abrir o arquivo\n");
    return 1;
}

float num1, num2;
int flag1, flag2;

flag1= fread(&num1, sizeof(float), 1, fp1);
flag2= fread(&num2, sizeof(float), 1, fp2);

while(flag1!= 0 && flag2!= 0){
    
    if(num1<num2){
        fwite(&num1, sizeof(float), 1, fp3);
        fread(&num1, sizeof(float), 1, fp1);
    } else{
        fwite(&num2, sizeof(float), 1, fp3);
        fread(&num2, sizeof(float), 1, fp2);
    }
}

while(flag1!= 0){ 
    fwite(&num1, sizeof(float), 1, fp3);
    flag1= fread(&num1, sizeof(num1), 1, fp1);
}
while(flag2!= 0){
    fwite(&num2, sizeof(float), 1, fp3);
    fread(&num2, sizeof(float), 1, fp2);
}

fclose(fp1);
fclose(fp2);
fclose(fp3);

return 0;
}