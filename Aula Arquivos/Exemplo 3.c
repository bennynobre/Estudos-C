#include <stdio.h>
#include <stdlib.h>

int main()
{
   char str[100];
   FILE *pf=NULL;

   pf = fopen("testeFixo.txt","r");
   if(pf==NULL) printf("Falha!\n\n");
   else {
         printf("Sucesso!\n\n");

         while(!feof(pf)) {
            //fgets(str, 100, pf);
            fscanf(pf,"%[^\n]\n", str);
            printf("%s\n",str);
         }
         fclose(pf);
   }
   return 0;
}