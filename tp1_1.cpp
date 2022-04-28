#include <stdio.h>

int num;
int * pnum;

int main(int argc, char const *argv[])
{
    num = 56;
    pnum = &num;

    printf("Hola Mundo\n");

    printf("El contenido del puntero %p\n", pnum);

    printf("La dirección de memoria almacenada por el puntero %p\n", &num);

    printf("la dirección de memoria de la variable %p\n", &num);

    printf("la dirección de memoria del puntero %p\n", &pnum);

    printf("el tamaño de memoria utilizado por esa variable %lu\n", sizeof(num));
    
    return 0;
}