#include <stdio.h>
#include <stdlib.h>

int main() {
   char str[100];
   FILE *pf=NULL;   // Referenciador de arquivos

   pf = fopen("teste.txt","w+");
   if(pf==NULL) printf("Falha!\n\n");
   else {
         printf("Sucesso!\n\n");

         printf("Digite uma frase: ");
         fgets(str, 100, stdin);
         fprintf(pf,"%s",str);
         rewind(pf);            // Volta o ponteiro para apontar para o inicio do arquivo
         fgets(str, 100, pf);  // Ler a linha toda com no máximo 100 char
         printf("%s\n",str);
         fclose(pf);             // Fechar o arquivo!!!
   }
   return 0;
}