#include <stdio.h>

int main (){
int n, prod=1, x; 
scanf("%i", &n);
 
for(x=1 ; x<=n; x++){
  printf("%d\n", x);
  prod= prod*x;
}
printf("\nO FATORIAL E: %d\n", prod);

}
