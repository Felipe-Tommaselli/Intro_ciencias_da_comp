#include <stdio.h>
#include <math.h>

int main()
{
double a, b, c, delta, x1, x2;

  printf("\nDigite os coeficientes da equação na forma a.x^2+b.x+c.\nLembre de digitar os ceficientes na forma decima.\n\na, b e c=\n");
  scanf("%lf\n%lf\n%lf", &a, &b, &c);

  delta= b*b - 4*a*c;


      if( delta < 0)
      {
      printf("Essa solucao nao possui raizes reais.\nPortanto, S={ }.");
      return 0;
      }

      else //if (delta>=0)
      {
      x1= (-b + sqrt(delta))/2*a;
      x2= (-b - sqrt(delta))/2*a;

printf("\nComo o Delta vale %0.3lf, as raizes equivalem a:\n\nx1= %0.3lf\nx2= %0.3lf\n\nPortanto, S={%0.3lf, %0.3lf}.", delta, x1, x2, x1, x2);
return 0;
}
}
