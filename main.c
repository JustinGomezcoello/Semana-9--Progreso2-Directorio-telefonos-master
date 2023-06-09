#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char nombre[4][25];
    char cedula[4][25];
    char cedula2[25];
    char telefono[4][25];

    while (1)
    {
        calculos(nombre, cedula, cedula2, telefono);
    }
    return 0;
}
