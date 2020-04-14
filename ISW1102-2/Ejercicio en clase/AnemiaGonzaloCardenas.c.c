/******************************************************************************



*******************************************************************************/
#include <stdio.h>

void main()
{
  float nivelhemoglobina;
  int edadanos, edad;
  int sino;
  printf("¿Su edad está en meses?\nPresione uno para si dos  para no: ");
  scanf("%i",&sino);
  if(sino==2)
  {
     printf("Ingrese su edad en años");
     scanf("%i",&edadanos);
     edad=edadanos*12;
  }
    else
  printf("Ingrese su edad");
  scanf("%i",&edad);
  printf("Ingrese su nivel de hemoglobina: ");
  scanf("%f",&nivelhemoglobina);
  if(edad==0 && edad<1 && nivelhemoglobina<13 && nivelhemoglobina<26)
       printf("Usted tiene Anemia");
  else if(edad==1 && edad<=6 && nivelhemoglobina>10 && nivelhemoglobina==18)
       printf("Usted tiene Anemia");
  else if(edad==6 && edad<=12 && nivelhemoglobina>11 && nivelhemoglobina==15)
       printf("Usted tiene Anemia");
  else if(edad==12 && edad<=60 && nivelhemoglobina>11.5 && nivelhemoglobina==15)
       printf("Usted tiene anemia");
  else if(edad==60 && edad<=120 && nivelhemoglobina>12.6 && nivelhemoglobina==15.5)
       printf("Usted tiene anemia");
  else if(edad==120 && edad<=180 && nivelhemoglobina>13 && nivelhemoglobina==15.5)
       printf("Usted tiene anemia");
       
   
    


  
}

