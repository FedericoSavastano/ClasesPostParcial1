#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///  esto con un archivo de mockaroo.com empleados.csv//

    FILE* pArchivo;
    char lector[1000];

    pArchivo = fopen("Empleados.csv","r");
    fgets(lector,1000,pArchivo);
    puts(lector);


    return 0;
}
