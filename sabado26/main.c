#include <stdio.h>
#include <stdlib.h>

int main()
{




    /**ESTE ES UN EJEMPLO COPIADIADO DEL GITHUB DEL PROFESOR*//

   char name[500], lastName[500], id[500],isEmpty[500];
   int cont=1;

   FILE * pFile;

   pFile = fopen ("data.csv", "r");

   while(!feof(pFile))
   {

       if(cont %250 == 0)
       {
           system("pause");
       }
       cont++;

       fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty);
       fscanf(pFile, "%[^,],%[^,],%[^,],%[^\n]\n", id, name, lastName,isEmpty); //se hace una segunda lectura para que lea la primera linea de info y no los datos

       printf("%s - %s, %s - %s\n", id, name, lastName, isEmpty);

   }

   fclose(pFile);



    return 0;
}
