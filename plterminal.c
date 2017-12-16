#include <stdio.h>
#include <string.h>
//strcmp
void main()
{

    char userName[25];
    int decision;
    int bucle = 1;
    int estudiando = 1;

    while(bucle == 1){
    printf("bienvenidos a Platzi Terminal\n");
    printf("ingresa tu nombre de usuario:\n");
    scanf("%s", userName);

    printf("bienvenido %s ,vamos a acceder a tu seccion\n", userName);

    if(strcmp(userName,"julian")==0)
    {
        while(estudiando == 1)
            {
                printf("Esto es PlatziTerminal Free edition, que deseas hacer?\n");
                printf("ingrese 1 para estudiar,\n 2 para leer el blog \n Ingrese cualquier otro valor para salir");
                scanf("%d", &decision);
                if(decision == 1)
                    printf("estas en la seccion de estudio, saca el maximo provecho\n");
                else if(decision == 2)
                    printf("estas en el blog, aprovechalo\n");
                else 
                {
                    printf("goodbye");
                    estudiando = 2;
                }
            }
    }       
    else if(strcmp(userName,"juliana")==0)
    {
        printf("Esto es PlatziTerminal Standar edition, que deseas hacer?\n");
        printf("ingrese 1 para estudiar,\n 2 para leer el blog \n Ingrese cualquier otro valor para salir");
        scanf("%d", &decision);
        if(decision == 1)
        printf("estas en la seccion de estudio, saca el maximo provecho\n");
        else if(decision == 2)
        printf("estas en el blog, aprovechalo\n");
        else 
        printf("goodbye");
    }
    else if(strcmp(userName,"paula")==0)
    {
        printf("Esto es PlatziTerminal Premium edition, que deseas hacer?\n");
        printf("ingrese 1 para estudiar,\n 2 para leer el blog \n 3 mentoria \n Ingrese cualquier otro valor para salir");
        scanf("%d", &decision);
        if(decision == 1)
        printf("estas en la seccion de estudio, saca el maximo provecho\n");
        else if(decision == 2)
        printf("estas en el blog, aprovechalo\n");
        else if(decision == 3)
        printf("estas en la seccion de solictud de mentorias\n");
        else 
        printf("goodbye");
    }
    else
    printf("no eres un usuario registrado, o escribiste mal tu nombre\n");
    printf("prueba de nuevo por favor");
}
    

}