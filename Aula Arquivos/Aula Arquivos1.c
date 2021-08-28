#include <stdio.h>
#include <stdlib.h>

int main() {
   int i=2,j=0;
   char str[100], str2[100];
   char c1=0,c2=0;
   FILE *pf=NULL;   // Referenciador de arquivos

   pf = fopen("teste.txt","a+");
   if(pf==NULL) printf("Falha!\n\n");
   else {
         printf("Sucesso!\n\n");

         fprintf(pf,"Hello ");  // Escreve no arquivo apontado por pf
         fprintf(pf,"World\n");
         fprintf(pf,"%d\n",i);
         rewind(pf);            // Volta o ponteiro para apontar para o inicio do arquivo
         fscanf(pf,"%c", &c1);
         fscanf(pf,"%c", &c2);
         fscanf(pf,"%s", str);
         fscanf(pf,"%s", str2);
         //fgets(str, 100, pf);  // Ler a linha toda com no máximo 100 char
         fscanf(pf,"%d", &j);
         printf("str= %s, str2= %s, c1= %c, c2= %c, j= %d\n",str,str2,c1,c2,j);
         fclose(pf);             // Fechar o arquivo!!!
   }
   return 0;
}