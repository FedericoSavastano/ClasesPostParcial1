#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main()
{
    ePersona* pPersona;
    pPersona = new_Persona();
    pPersona = new_Persona_Parametros(10,20,3);


    printf("La persona es: \n");

    if(mostrarPersona(pPersona)!=1)
    {
        printf("Error al mostar");
    }

    delete_Persona(pPersona);




    return 0;
}
