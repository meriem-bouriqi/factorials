#include <stdio.h>
 
void main()
{
  int x, i, fac ;
  printf("! programme qui calcul la foctorille d'un nombre X!! \n");
  printf("veuillez entrez un nombre entier : ");
  scanf("%d", &x);
   if (x>0)
   {
    fac = 1;
  for (i = 1; i <= x; i++)
    fac = fac * i;
    printf("Factorielle de %d = %d\n", x, fac);
   }
   else
   {
    if (x==0)
    {
       printf("%d! = 1",x);
    }
    else
    {
        printf("impossilbe!!! Veuillez entrer un nombre posifif");
    }
   }
  return 0;
}