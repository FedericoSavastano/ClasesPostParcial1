#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int a;
    float b;
    char c;

}eDato;

void cargarDatos(eDato*, int);

int main()
{
    /*
    eDato unDato = {1,5.3, 'B'};
    eDato* pDato;

    pDato = &unDato;

    printf("%d -- %f -- %c\n",(*pDato).a, (*pDato).b, (*pDato).c); //para mostrar con puntero
    printf("%d -- %f -- %c\n",unDato.a, unDato.b, unDato.c); //para mostrar directamente
    */

    eDato unDato[2] = { {2,3.26,'C'},{1,5.3, 'B'} };
    eDato* pDato;

    pDato = unDato;

    printf("%d -- %f -- %c\n",(*pDato).a, (*pDato).b, (*pDato).c); //para mostrar con puntero
  //  printf("%d -- %f -- %c\n",unDato.a, unDato.b, unDato.c); //para mostrar directamente

    printf("%d -- %f -- %c\n",(*(pDato+1)).a, (*(pDato+1)).b, (*(pDato+1)).c);
    int i;
    for(i=0;i<2;i++)
     {
         printf("%d -- %f -- %c\n",(*(pDato+i)).a, (*(pDato+i)).b, (*(pDato+i)).c);

        printf("%d -- %f -- %c\n", (pDato+i)->a, (pDato+i)->b, (pDato+i)->c);

         }



    para pedir

    for(i=0;i<2;i++)
        {
            printf("Ingrese un int : ");
            scanf("%d", &(pDato+i)->a);
            printf("Ingrese un float : ");
            scanf("%f", &(pDato+i)->b);

            printf("ingrese caracter : ");
            fflush(stdin);
            (pDato+i)->c = getche();


            }





    return 0;
}


void cargarDatos(eDato* listaDatos, int tam)
{
    int i;
    for(i=0;i<tam;i++)
        {
            printf("Ingrese un int : ");
            scanf("%d", &(listaDatos+i)->a);
            printf("Ingrese un float : ");
            scanf("%f", &(listaDatos+i)->b);

            printf("ingrese caracter : ");
            fflush(stdin);
            (listaDatos+i)->c = getche();


            }



}


void mostarDatos(eDato* listaDatos, int tam )
{


}



hacer el parcial, practicar con el tp2 pasarlo todo a punteros, leer el apunte de punteros y memoria dinamica
