#include <stdio.h>
#include <stdlib.h>

int main()
{
  float *v;
  int i;
//Aloca 5 espaços na memória do tipo float
  v = (float *) malloc(5 * sizeof(float));

//Armazenando os dados em um vetor alocado dinamicamente
  for (i = 0; i < 5; i++)
  {
    printf("\nDigite o valor para a posicao %d do vetor: ", i+1);
    scanf("%f",&v[i]);
  }
//Impreme os valores
  printf("\nValores do vetor dinamico\n\n");

  for (i = 0;i < 5; i++)
  {
    printf("%.2f\n",v[i]);
  }

//Libera a memória
  free(v);
  return 0;
}
