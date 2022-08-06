#include <stdio.h>

//1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
//Por ejemplo "CASA" debe indicar 4 letras.


int main()
{

  char palabra[21];
  int pf;
  int i;



  printf("Ingrese una palabra (maximo 20 letras) \n");
  scanf("%s",&palabra);

  i=0;

while(palabra[i]!='\0')
{
    pf++;
    i++;
}


printf("Cantidad de letras: %d",pf);






    return 0;
}
