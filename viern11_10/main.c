#include <stdio.h>
#include <stdlib.h>

void cargarVector (int *, int);
void mostrarVector (int *, int);



int main()
{
   /**para saber cuanto vale una variable**/
   //sizeof
   //int x;
   //printf("%d",sizeof(float)); /**los int y los float y los punteros pesan 4, el char pesa 1**/
   /** se puede tener un array de punteros , y es mas eficaz por ejemplo para organizar y swapear hacerlo
   atraves de punteros que moviendo los datos*/
   /*
   int * puntero;
   int unEntero;
   puntero= &unEntero;

   printf("%d\n",puntero);
   printf("%d\n",puntero+0);
   printf("%d\n",puntero+1);
   printf("%d\n",puntero+2);
   /**esta es la forma en la que trabaja un array, corriendose un lugar en lugares de memoria.
    */


    ///int* puntero;
    ///int vector[5] = {5,7,9,8,3};
    /*
    puntero = &vector;
    puntero = vector;
    puntero = &vector[0];
    puntero = vector[0];

    aca el que va es puntero = vector, el ultimo no funciona. el 1 y el 3 son validos pero son redundantes.
    */
    ///puntero = vector;
    ///int i;
    //int culo;
    /*
    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero : ");
        scanf("%d", puntero+i);
    }



    for(i=0;i<5;i++)
    {
        //culo=*puntero+i;
        printf("%d \n", *(puntero+i)); //vector[i]
       //printf("%d\n", culo);
    }

    */

    int vector[5];

    cargarVector(vector,5);
    mostrarVector(vector,5);



    /**RECUPERATORIO, SOLO PARA PROMOCIONAR, LA PRIMERA DE DICIEMBRE VA A SER, LA ULTIMA SEMANA DE CLASES. ME SAQUE UN 4 , ESTOY APROBADO IGUAL*/







   /**
   int unEntero;
   int * puntero = NULL;
   int * otroPuntero;

   printf("%d\n\n", puntero);
   puntero = &unEntero;

   printf("Ingrese un numero: ");
   scanf("%d", puntero);

   if(puntero != NULL)
   {
       otroPuntero = puntero;
   }

   */






    return 0;
}

void cargarVector (int * vector , int tam)
{

   int i;
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero : ");
        scanf("%d", vector+i);
    }
}

void mostrarVector (int * vector , int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        //culo=*puntero+i;
        printf("%d \n", *(vector+i)); //vector[i]
       //printf("%d\n", culo);
    }
}


