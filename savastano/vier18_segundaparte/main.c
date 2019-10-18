#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pEntero = (int*)calloc(sizeof(int),5); /** inicializa en cero todo */
                    /**esto fuerza a un dato a comportarse de otra manera */
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d-", *(pEntero+i) );
    }


    free(pEntero); //libera los datos a los que apunta el puntero. el puntero sigue apuntando al mismo lugar, pero ese espacio se vuelve disponible//

    for(i=0;i<5;i++)
    {
        printf("%d-", pEntero[i] );
    }




    return 0;
}
