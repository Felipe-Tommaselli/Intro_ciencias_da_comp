#include <stdio.h>
#include <math.h>

int main()
{
  double A, B, C;

    
  printf("insira os valores dos lados do triangulo (de forma decrescente):\n\nA= ");
  scanf("%lf", &A);
  printf("B= ");
  scanf("%lf", &B);
  printf("C= ");
  scanf("%lf", &C);
//------------------------------------------------------------
    if (A>=B && A>=C && B>=C)      // if ordem
    {
        if (A>0 && B>0 && C>0)      //if CE
        { 

        if (A>= B + C)              //if basico
        {
        printf("\n\n\t\tNAO FORMA TRIANGULO\n");
        return 0;
        }                           //fim do if basico
    
/////////////////////////////////////////////////////////////
            if ( A== B && A== C &&  B== C) //if eq
            {
            printf("\n\n\tTRIANGULO EQUILATERO\n\n\tTRIANGULO ACUTANGULO");
            return 0;
            } //fim do eq 
            
            else
            {                        // else eq
//--------------------------------------------------------            
                if (A==B || A==C || B==C )//if iso
                {
                printf ("\n\n\tTRIANGULO ISOCELES");
                
                    if (pow(A,2)== pow(B,2) + pow(C,2))
                    {
                    printf("\n\n\tTRIANGULO RETANGULO");
                    return 0;
                    } //fim do if3

                    if (pow(A,2)> pow(B,2) + pow(C,2))
                    {
                    printf("\n\n\tTRIANGULO OBTUSANGULO");
                    return 0;
                    } //fim do if4
    
                    if (pow(A,2)< pow(B,2) + pow(C,2))
                    {
                    printf("\n\n\tTRIANGULO ACUTANGULO");
                    return 0;
                    } // fim do if5         
//----------------------------------------------------------      
                }                  //fim do if iso 
                
                else //else iso
                {
                          if (pow(A,2)== pow(B,2) + pow(C,2))
                          {
                            printf("\n\n\tTRIANGULO RETANGULO");
                            return 0;
                          } //fim do if3

                           if (pow(A,2)> pow(B,2) + pow(C,2))
                          {
                            printf("\n\n\tTRIANGULO OBTUSANGULO");
                            return 0;
                          } //fim do if4
                        
                          if (pow(A,2)< pow(B,2) + pow(C,2))
                          { 
                            printf("\n\n\tTRIANGULO ACUTANGULO");
                            return 0;
                          } // fim do if5    
    
                }              //else iso
       
            }                  //fim else eq

        }                         // fim do if CE
    
        else                      // else CE
        {
          printf("\n\n\t\tERRO, INSIRA VALORES POSITIVOS");
          return 0;
        }                         //fim do else CE
    }
      else
      { 
        printf("\n\n\tERRO, INSIRA OS VALORES EM ORDEM DECRESCENTE");
        return 0;
      }
return 0;
}    //fim do programa
