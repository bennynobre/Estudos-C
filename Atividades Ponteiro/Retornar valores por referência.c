#include <stdio.h>

void converte_tempo(int segundos, int *hor, int *min, int *seg)
{

      *min = (segundos/60);
	   *hor = (*min/60);
      *seg = (segundos%60);
      *min = (*min%60);
}

int main()
{
   int tempo, h, m, s;
   scanf("%d", &tempo);
   
   converte_tempo(tempo,&h,&m,&s);

   printf("%d:%d:%d", h, m, s);
}