#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int painel(char lixo){
  int dificuldade;
  printf("Ola, seja bem-vindo(a) :D\n Escolha o tamanho do labirinto:\n 1 - Pequeno\n 2 - Medio\n 3 - Grande\n\nEscolha com cautela\n");
  scanf("%d", &dificuldade);
  scanf("%c", &lixo);
  return dificuldade;
}

int difi(char lixo){
  int dificuldade;
  printf("Escolha o nivel de inteligência do minotauro :\n 1 - Barata doida\n 2 - Tiringa\n 3 - Eistein\n\nEscolha com cautela\n");
  scanf("%d", &dificuldade);
  scanf("%c", &lixo);
  return dificuldade;
}

int checarmorte(char **matriz, int morreu, int fim, int tamanho){
    int i, j;
    morreu = 1;
    for (i = 0; i < tamanho; i++){
      for (j = 0; j < tamanho; j++){
        if(matriz[i][j]=='P'){
        morreu=0;
        }
      }
    }
    return morreu;
}

int checarvitoria(char **matriz, int fim, int tamanho){
    int i, j;
    fim=1;
    for (i = 0; i < tamanho; i++){
      for (j = 0; j < tamanho; j++){
        if(matriz[i][j]=='o'){
        fim=0;
        }
      }
    } 
    return fim;
}

void monstro(char **matriz, int *vetor){
    srand(time(NULL));
    int monstromove = rand() % 4;
    if(monstromove==0){
      if(vetor[3]==0){monstromove++;}else{
          matriz[vetor[10]-1][vetor[11]]='M';
          matriz[vetor[10]][vetor[11]]='.';
        }
      }
    
    if(monstromove==1){
      if(vetor[0]==0){monstromove++;}else{
        matriz[vetor[10]][vetor[11]-1]='M';
        matriz[vetor[10]][vetor[11]]='.';
      }
    }
    
    if(monstromove==2){
      if(vetor[2]==0){monstromove++;}else{
        matriz[vetor[10]+1][vetor[11]]='M';
        matriz[vetor[10]][vetor[11]]='.';
      }
    }
    
    if(monstromove==3){
      if(vetor[1]==0){monstromove=0;}else{
        matriz[vetor[10]][vetor[11]+1]='M';
        matriz[vetor[10]][vetor[11]]='.';
     }
    }
}

int movimentar(char **matriz, int *vetor, char resposta, int qntd){
        if(resposta=='w'){
      if(vetor[7]==0){printf("\nVoce esbarrou na parede\n");}else{
          matriz[vetor[8]-1][vetor[9]]='P';
          matriz[vetor[8]][vetor[9]]='.';
          qntd++;
        }
      }
    
    if(resposta=='a'){
      if(vetor[4]==0){printf("\nVoce esbarrou na parede\n");}else{
        matriz[vetor[8]][vetor[9]-1]='P';
        matriz[vetor[8]][vetor[9]]='.';
        qntd++;
      }
    }  
    if(resposta=='s'){
      if(vetor[6]==0){printf("\nVoce esbarrou na parede\n");}else{
        matriz[vetor[8]+1][vetor[9]]='P';
        matriz[vetor[8]][vetor[9]]='.';
        qntd++;
      }
    }
    
    if(resposta=='d'){
      if(vetor[5]==0){printf("\nVoce esbarrou na parede\n");}else{
        matriz[vetor[8]][vetor[9]+1]='P';
        matriz[vetor[8]][vetor[9]]='.';
        qntd++;
      }
    }
}

void monstro3(char **matriz, int *vetor){

  int vet[4] = {-1,-1,-1,-1};

    if(vetor[10] > vetor[8]){
      if(matriz[vetor[10]-1][vetor[11]] != '|'){
        vet[0] = 1;
      }
    }
     if(vetor[10] < vetor[8]){
      if(matriz[vetor[10]+1][vetor[11]] != '|'){
        vet[2] = 1;
      }
    }
     if(vetor[11] > vetor[9]){
      if(matriz[vetor[10]][vetor[11]-1] != '|'){
        vet[1] = 1;
      }
    }
     if(vetor[11] < vetor[9]){
      if(matriz[vetor[10]][vetor[11]+1] != '|'){
        vet[3] = 1;
      }
    }

      srand(time(NULL));
      int monstromove = -1;
      int cont = 0;

      for(int i=0; i < 4; i++){
        if(vet[i] != -1){
          cont++;
        }
      }

      if(cont == 0){
         
          if(matriz[vetor[10]-1][vetor[11]] != '|'){
            vet[0] = 1;
          }
        
        
          if(matriz[vetor[10]+1][vetor[11]] != '|'){
            vet[2] = 1;
          }
        
        
          if(matriz[vetor[10]][vetor[11]-1] != '|'){
            vet[1] = 1;
          }
        
          if(matriz[vetor[10]][vetor[11]+1] != '|'){
            vet[3] = 1;
          }

          for(int i=0; i < 4; i++){
            if(vet[i] != -1){
              cont++;
            }
          }
    
      }

      int vet2[cont];
      int a = 0;

      for(int i=0; i < 4; i++){
        if(vet[i] != -1){
          vet2[a] = i;
          a++;
        }
      }

      a = cont > 1 ? rand() % cont: 0;
      monstromove = vet2[a];

    if(monstromove==0){
      if(vetor[3]==0){monstromove++;}else{
          matriz[vetor[10]-1][vetor[11]]='M';
          matriz[vetor[10]][vetor[11]]='.';
        }
      }
    
    if(monstromove==1){
      if(vetor[0]==0){monstromove++;}else{
        matriz[vetor[10]][vetor[11]-1]='M';
        matriz[vetor[10]][vetor[11]]='.';
      }
    }
    
    if(monstromove==2){
      if(vetor[2]==0){monstromove++;}else{
        matriz[vetor[10]+1][vetor[11]]='M';
        matriz[vetor[10]][vetor[11]]='.';
      }
    }
    
    if(monstromove==3){
      if(vetor[1]==0){monstromove=0;}else{
        matriz[vetor[10]][vetor[11]+1]='M';
        matriz[vetor[10]][vetor[11]]='.';
     }
    }
}

void instrucoes(int *vetor){
    printf("Use WASD para mover o personagem,\n voce pode ir para:\n");
    if(vetor[7]==1)printf("W - CIMA\n");
    if(vetor[4]==1)printf("A - ESQUERDA\n");
    if(vetor[6]==1)printf("S - BAIXO\n");
    if(vetor[5]==1)printf("D - DIREITA\n");
}

int checar(char **matriz, int *vetor, int tamanho){
    int i, j;
    for (i = 0; i < tamanho; i++){
      for (j = 0; j < tamanho; j++){
        if(matriz[i][j]=='M'){
            vetor[10]=i;
            vetor[11]=j;
            if(matriz[i][j+1] == '.') vetor[1] = 1; else vetor[1] = 0; 
            if(matriz[i][j-1] == '.') vetor[0] = 1; else vetor[0] = 0;
            if(matriz[i+1][j] == '.') vetor[2] = 1; else vetor[2] = 0;
            if(matriz[i-1][j] == '.') vetor[3] = 1; else vetor[3] = 0;
          }
        if(matriz[i][j]=='P'){
          vetor[8]=i;
          vetor[9]=j;
          if(matriz[i][j+1] == '.' || matriz[i][j+1] == 'o') vetor[5] = 1; else vetor[5] = 0; 
          if(matriz[i][j-1] == '.' || matriz[i][j-1] == 'o') vetor[4] = 1; else vetor[4] = 0; 
          if(matriz[i+1][j] == '.' || matriz[i+1][j] == 'o') vetor[6] = 1; else vetor[6] = 0; 
          if(matriz[i-1][j] == '.' || matriz[i-1][j] == 'o') vetor[7] = 1; else vetor[7] = 0;  
        }
      }
    }

    return vetor;
}

void preenche(char **matriz, int tamanho, FILE *mino){

    for(int i=0; i < tamanho; i++){
      for(int j=0; j < tamanho; j++){
        fscanf(mino, "%c" ,&matriz[i][j]);
      }
      fscanf(mino, "\n");
    }

}

void mostrar(char **matriz, int tamanho){
    int i, j;
    for (i=0; i < tamanho; i++){
        for (j=0; j < tamanho; j++){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(){
    char **matriz = NULL;
    int *vetor = NULL;
    int i, qntd=0;
    char lixo;
    char resposta;
    int fim = 0, morreu = 0, dificuldade, tamanho=0, ia;

    FILE *mino=NULL;

    vetor = malloc (12 * sizeof (int*));

    dificuldade = painel(lixo);
    ia = difi(lixo);
    if(dificuldade == 1){
      mino = fopen("Matriz20.txt", "r");

      matriz = malloc (20 * sizeof (char*));
      for (i=0; i < 20; i++) matriz[i] = malloc (20 * sizeof (char));

      tamanho = 20;

     preenche(matriz,tamanho,mino);
    }
    else if(dificuldade == 2){
      mino = fopen("Matriz30.txt", "r");

      matriz = malloc (30 * sizeof (char*));
      for (i=0; i < 30; i++) matriz[i] = malloc (30 * sizeof (char));

      tamanho = 30;

      preenche(matriz,tamanho,mino);
    } 
    else if(dificuldade == 3){
      mino = fopen("Matriz50.txt", "r");

      matriz = malloc (50 * sizeof (char*));
      for (i=0; i < 50; i++) matriz[i] = malloc (50 * sizeof (char));

      tamanho = 50;

      preenche(matriz,tamanho,mino);
    }
    if(mino == NULL){
      printf("Falha");
    }

    while(fim==0){

        mostrar(matriz, tamanho);
        vetor = checar(matriz, vetor, tamanho);
        instrucoes(vetor);
        scanf(" %c", &resposta);
       // scanf(" %c", &lixo);
        qntd = movimentar(matriz, vetor, resposta, qntd);
        if(ia==1)monstro(matriz, vetor);
        if(ia==2){
          monstro(matriz, vetor);
          checar(matriz, vetor, tamanho);
          monstro(matriz, vetor);
        }
        if(ia==3){
          monstro3(matriz, vetor);
        }
        fim = checarvitoria(matriz, fim, tamanho);
        morreu = checarmorte(matriz, morreu, fim, tamanho);
        if(fim==1){
            printf("Voce ganhou :)\n"); 
            mostrar(matriz, tamanho);
        }else if(morreu==1){
            fim = 1; 
            printf("Voce morreu :(\n"); 
            mostrar(matriz, tamanho);    
        }              
    }

    for (int i = 0; i < 3; i++){
        free (matriz[i]);
    }
    free(matriz);
    free(vetor);

    fclose(mino);   
  return 0;
}