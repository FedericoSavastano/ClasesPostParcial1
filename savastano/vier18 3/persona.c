#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

ePersona* new_Persona()
{
    ePersona* miPersona;

   // miPersona = malloc(sizeof(ePersona));
    miPersona = calloc(sizeof(ePersona),1);
    /*
    miPersona->legajo = 100;
    miPersona->edad = 40;
    miPersona->altura = 1.87;
    */




    return miPersona;
}


int mostrarPersona(ePersona* unaPersona)
{
    int ret= -1;
    if(unaPersona!=NULL)
    {
        printf("%d--%d--%f", unaPersona->legajo, unaPersona->edad, unaPersona->altura);
    }
}




ePersona* new_Persona_Parametros(int legajo, int edad, float altura)
{
    ePersona* miPersona = new_Persona(); //(ePersona*) malloc(sizeof(ePersona));
    if(miPersona!=NULL)
    {
        miPersona->legajo = legajo;
        miPersona->edad = edad;
        miPersona->altura = altura;
    }

    return miPersona;

}


int delete_Persona(ePersona* unaPersona)
{
    int ret = -1;



}

