#include <stdio.h>
#include <stdlib.h>


    ///**archivos**///



int main()
{
    /*
    FILE* PArchive;
    //*representa un puntero que guarda la dir de memoria del archivo// la representacion de mi archivo en memoria
    //pero trabajo en disco

    //apertura, lectura, cierre//

    //apertura//

    PArchive = fopen("D:\\GARLOMPAS\\miNombre.txt","w"); //el archivo donde se guardara,;;; el modo de lectura R read W write . A para anexar a uno hecho,

    fprintf(PArchive, "OSTIONES"); // escribir archivos de texto, escribe en el archivo.

    ///fwrite(); // ecribir archivos binarios

    fclose(PArchive);
    */
        ///-----------------------------------------------------------------///

    /*
    FILE* pArchive;
    char miNombre[50];


    pArchive= fopen("D:\\GARLOMPAS\\miNombre.txt","r");

    fgets(miNombre,50, pArchive);

    fclose(pArchive);

    printf("Mi nombre es: %s ", miNombre);
    */


    FILE* pArchive;
    char otras[50];


    pArchive = fopen("D:\\GARLOMPAS\\otras.txt","w");
    //fprintf(pArchive,"Pepe\n");
    //fprintf(pArchive,"Fatiga\n");
    //fclose(pArchive);
    //fprintf(pArchive, "me llamo %s" ,miNombre);

//    fgets(otras,50,pArchive);
fgets(otras,50, pArchive);
    fclose(pArchive);


    return 0;
}
