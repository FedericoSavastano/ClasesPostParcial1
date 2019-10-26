#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
    int id;
    char nombre[50];
    char apellido[50];
    float nota;

}eAlumno;
/**este es el mismo pero pasando todo a memoria dinamica*//


eAlumno* new_Alumno();
eAlumno* new_Alumno_Parametros(int, char*, char*, float);



int main()
{
    eAlumno* lista[10];
    eAlumno* alumno;
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

        alumno=new_Alumno_Parametros(atoi(id),nombre,apellido,atof(nota));

       *(lista+i)= alumno;

       i++;




   }

    fclose(pArchivo);


   int e;

   for(e=0; e<10; e++)
   {
           printf("%d - %s - %s - %.2f\n", ( *(lista+e) )->id, (*(lista+e))->nombre, (*(lista+e))->apellido, (*(lista+e))->nota);
   }






    return 0;
}



eAlumno* new_Alumno()
{
    eAlumno* alumno= (eAlumno*) malloc(sizeof(eAlumno)); //el casteo es porque el malloc devuelve un puntero a void, casteandolo le digo que es un puntero a alumno o a lo especifico que necesito

    return alumno;
}



eAlumno* new_Alumno_Parametros(int id, char* nombre, char* apellido, float nota)
{

    eAlumno* alumno = new_Alumno();


       alumno->id = id;
       strcpy(alumno->nombre, nombre );
       strcpy(alumno->apellido, apellido );
       alumno->nota = nota;






}
