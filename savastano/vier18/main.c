#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * miVector;
    int * auxVec;
    int x;
    miVector= (int*) malloc(sizeof(int)*5);

    if(miVector!=NULL)
    {
        /*LE ASIGNO EL DATO*/
        for(x=0;x<5;x++)
        {

            *(miVector+x) = x+1;




        }
        for(x=0;x<5;x++)
        {
            printf("%d\n", *(miVector+x));
        }

        printf("aca le pide mas espacio\n");
        auxVec = (int*) realloc(miVector,sizeof(int)*10);
        /**SE LO PONE EN UN AUX PARA QUE NO ME QUEDE NULL MI VARIABLE POSTA Y ME PIERDA TODOS LOS DATOS*/
        if(auxVec!=NULL)
        {
            miVector = auxVec; /**una vez que no me puso null y funciona, le asigno mi vector con los datos que van */
            for(x=5;x<10;x++)
            {
                *(miVector+x) = x+1;
            }

            for(x=0;x<10;x++)
            {
                printf("%d\n", *(miVector+x));
            }

            printf("Lo reducimos\n");

            miVector=realloc(miVector,sizeof(int)*3); /**no hace falta buscar lo del null ya que no necesita de mas y no hay chance de que se pierda*/

            for(x=0;x<10;x++)
            {
                printf("%d\n", *(miVector+x));
            }


        }


    }
    else
    {
        printf("no encontré espacio");
    }






    return 0;
}
