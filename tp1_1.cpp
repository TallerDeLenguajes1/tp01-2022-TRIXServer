#include <stdio.h>

int num;
int * pnum;

int main(int argc, char const *argv[])
{
    num = 56;
    pnum = &num;

    printf("Hola Mundo\n");

    printf("El contenido del puntero \t\t\t\t%d\n", * pnum);

    printf("La dirección de memoria almacenada por el puntero \t%p\n", pnum);

    printf("la dirección de memoria de la variable \t\t\t%p\n", &num);

    printf("la dirección de memoria del puntero \t\t\t%p\n", &pnum);

    printf("el tamaño de memoria utilizado por esa variable \t%lu\n", sizeof(num));
    
    return 0;
}