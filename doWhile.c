#include <stdio.h>

void main()
{
  int decision;
  int inc = 0;

  do
  {
    inc++;
    printf("ejecucion #%d\n", inc );
    printf("si desea continuar presione 1 o cualquier otro para salir\n");
    scanf("%d", &decision );
  }while(decision==1);

  printf("gracias, adios\n");
}
