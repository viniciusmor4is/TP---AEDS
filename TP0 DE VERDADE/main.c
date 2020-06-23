#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;
   scanf("%d",&N);
  char jogadorPar[16];
  char jogadorImpar[16];
  int x, y;

   //printf("%i\n", N);
  int testeN=0, i;
   while(N !=0) {  testeN++;

    printf("\nTeste %i: \n", testeN);
 //  printf("Digite o nome do jogador que escolheu par (limite de 15 caracteres, sem espaços em branco e caracteres especiais):\n");
    scanf("%s", jogadorPar);
   //printf("Digite o nome do jogador que escolheu impar, seguindo as regras ja determinadas:\n");
    scanf("%s", jogadorImpar);
  // printf("%s escolheu par\n", jogadorPar);
   //printf("%s escolheu impar\n", jogadorImpar);
   for (i=0; i<N; i++) {

  //  printf("Escreva o numero jogado pelo jogador %s: \n", jogadorPar);
   scanf("%d", &x);
   //printf("Escreva o numero jogado pelo jogador %s: \n", jogadorImpar);
   scanf("%d", &y);
   if ((x+y)%2==0) printf("%s \n", jogadorPar);
     else printf("%s \n", jogadorImpar);
    }

    scanf("%i",&N);
   }
    return 0;
}
