#include <stdio.h>
#include <stdlib.h>


typedef struct{

    int legajo;
    //char
    int edad;
    float altura;


}ePersona;

ePersona* new_Persona(); //esto e un constructor. se llama constructor por defecto. porque inicializa con valores en 0, es lo que se genera por defecto.
//tambien hay constructores con parametros.
int mostrarPersona(ePersona*);
int delete_Persona(ePersona*);
ePersona* new_Persona_Parametros(int, int, float);//aca en este le puedo pasar los parametros para crear una nueva estructura
