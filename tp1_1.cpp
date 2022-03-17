#include <stdio.h>

int num;
int *pnum;

int main(int argc, char const *argv[])
{
    num = 56;
    pnum = num;

    printf("&f", pnum);

    printf("Hola Mundo");

    return 0;
}