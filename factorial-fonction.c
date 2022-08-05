#include <stdio.h>
 
int factorial(int X)
{
  int i, F;
 F = 1;
  for (i = 1; i <= X; i++)
   F = F * i;
  return F;
}
 
int main()
{
  int X;
  printf("! Un programme qui calcul la foctorille d'un nombre X!! \n");
  printf("veuillez entrez un nombre entier X : ");
  scanf("%d", &X);
 
  if (X==0)
    {
       printf("%d! = 1",X);
    }
    else if (X<0)
    {
         printf("impossilbe!!! Veuillez entrer un nombre posifif");
    }
    else
    {
       printf("la factorielle de %d! = %d\n", X, factorial(X)); 
    }
    return 0;
   }
 

