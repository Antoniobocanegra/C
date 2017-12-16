#include <stdio.h>

void main()
{
int a,b,c,d;



printf("Ingrese valor de a\n");
scanf("%d", &a);

printf("Ingrese valor de b\n");
scanf("%d", &b);

printf("Ingrese valor de c\n");
scanf("%d", &c);

printf("Ingrese valor de d\n");
scanf("%d", &d);


if(a>b){
printf("a es mayor que b\n");
}

else if(a>c){
printf("a es mayor que c\n");
}

else if(a>d){
printf("a es mayor que d\n");
}

else{
printf("a no es mayor que b.c.d\n");
}

}

