#include <stdio.h>
#include <stdlib.h>

int calculoCuadrado (int);
void calcularCuadradodeNuevo(int *);
void mostrarContenidoyDireccion(int *);
void invertir(int *, int *);
void orden(int *, int *);

int main(int argc, char const *argv[])
{
    int numero;
    int resultado;
    int * pNumero;
    int a;
    int b;
    int * pA;
    int * pB;
    
    pNumero = &numero;
    
    system("cls || clear");
    
    printf("Ingrese el numero a calcular su cuadrado: ");
    scanf("%d", &numero);
    resultado = calculoCuadrado(numero);
    printf("--\n");
    printf("El cuadrado de %d es %d\n", numero, resultado);
    
    calcularCuadradodeNuevo(pNumero);
    printf("--\n");
    printf("El cuadrado calculado con puntero es %d\n", * pNumero);

    printf("--\n");
    mostrarContenidoyDireccion(pNumero);
    
    printf("--\n");
    printf("Ingrese el numero a: ");
    scanf("%d", &a);
    printf("Ingrese el numero b: ");
    scanf("%d", &b);
    
    pA = &a;
    pB = &b;
    
    invertir(pA, pB);
    printf("Numero a: \t%d\n", a);
    printf("Numero b: \t%d\n", b);
        
    printf("--\n");
    orden(pA, pB);
    printf("Primer Numero: \t\t%d\n", a);
    printf("Segundo Numero: \t%d\n", b);

    return 0;

}

int calculoCuadrado (int num)
{
    return (num * num);
}

void calcularCuadradodeNuevo(int * num)
{
    * num = (* num) * (* num);

}

void mostrarContenidoyDireccion(int * num)
{
    printf("Contenido de la variable %d\n", * num);
    printf("Direccion de la variable %p\n", num);

}

void invertir(int * a, int * b)
{
    int aux;
    aux =  * a;
    * a = * b;
    * b = aux;
    
}

void orden(int * primero, int * segundo)
{
    int aux;
    if (* primero > * segundo)
    {
        aux =  * primero;
        * primero = * segundo;
        * segundo = aux;

    }

}