#include <stdio.h>
#include <string.h>
void calculos(char nombre[4][25], char cedula[4][25], char cedula2[25], char telefono[4][25])
{
    int opcion;
    printf("1.-Ingrese contacto \n");
    printf("2.-Busqueda por cedula \n");
    fflush(stdin);
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        for (int i = 0; i < 4; i++)
        {
            printf("Ingrese el nombre: ");
            fflush(stdin);
            scanf("%s", nombre[i]);

            printf("Ingrese la cedula: ");
            fflush(stdin);
            scanf("%s", cedula[i]);

            printf("Ingrese el teléfono: ");
            fflush(stdin);
            scanf("%s", telefono[i]);
        }
        break;
    case 2:
        printf("Ingrese la cedula\n");
        fflush(stdin);
        scanf("%s", cedula2);
        for (int i = 0; i < 4; i++)
        {
            if (strcmp(cedula2, cedula[i]) == 0)
            {
                printf("El nombre es: %s\n", nombre[i]);
                printf("la cedula es: %s\n", cedula[i]);
                printf("El telefono es: %s\n", telefono[i]);
            }
        }
        break;
    }
}
