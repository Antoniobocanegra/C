#include <stdio.h>

void main()
{
  int decision = 1;
  int inc = 0;
  while(decision==1)
  {
    inc++;
    printf("ejecucion #%d\n", inc );
    printf("si desea continuar presione 1 o cualquier otro para salir\n");
    scanf("%d", &decision );
  }

  printf("gracias, adios\n");
}
