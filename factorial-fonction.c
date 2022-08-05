#include <stdio.h>
 
int factorial(int x)
{
  int i, F;
 F = 1;
  for (i = 1; i <= x; i++)
   F = F * i;
  return F;
}
 
int main()
{
  int x;
  printf("! Un programme qui calcul la foctorille d'un nombre X!! \n");
  printf("veuillez entrez un nombre entier X : ");
  scanf("%d", &x);
 
  if (x==0)
    {
       printf("%d! = 1",x);
    }
    else if (x<0)
    {
         printf("impossilbe!!! Veuillez entrer un nombre posifif");
    }
    else
    {
       printf("la factorielle de %d! = %d\n", x, factorial(x)); 
    }
    return 0;
   }
 

