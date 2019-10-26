#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "alumno.h"

typedef struct{
    int id;
    char nombre[50];
    char apellido[50];
    float nota;

}eAlumno;


int main()
{
    eAlumno lista[10];
    eAlumno alumno;
    FILE* pArchivo;
    //char mensaje[50];
    int i=0;

    char id[10];
    char nombre[50];
    char apellido[50];
    char nota[10];

    pArchivo = fopen("datatres.csv","r");

    fscanf(pArchivo, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, nota);

    while(!feof(pArchivo))
   {
        fscanf(pArchivo, "%[^,],%[^,],%[^,],%[^\n]\n", id, nombre, apellido, nota);

       alumno.id = atoi(id);
       strcpy(alumno.nombre, nombre );
       strcpy(alumno.apellido, apellido );
       alumno.nota = atof(nota);

       lista[i]= alumno;

       i++;




   }

    fclose(pArchivo);


   int e;

   for(e=0; e<10; e++)
   {
           printf("%d - %s - %s - %.2f\n", lista[e].id, lista[e].nombre, lista[e].apellido, lista[e].nota);
   }






    return 0;
}
