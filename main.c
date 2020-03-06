#include <stdio.h>
#include <stdlib.h>

void selectionsort(int *vetor, int tamvetor){
  for(int seta = 0; seta < tamvetor; seta++){
    int menor = seta;

    for(int i = seta; i < tamvetor; i++){
      if(vetor[i] < vetor[menor])
        menor = i;
    }

    int aux = vetor[seta];
    vetor[seta] = vetor[menor];
    vetor[menor] = aux;

    printf("iteracao %i: ", seta+1);
    for(int i = 0; i < tamvetor; i++){
      printf("%i, ", vetor[i]);
    }
    printf("\n");
  }
}

int main(){
  int vetor[10] = {1,-7,234,834,12,73,85,-93,0,61};
  int tamvetor = 10;

  for(int i = 0; i < tamvetor; i++){
    printf("%i,\n", vetor[i]);
  }

  printf("\n[pressione ENTER para continuar]\n");
  getchar();

  selectionsort(vetor, 10);

  printf("\n\nvetor SELECTIONSORTADO:\n");
  for(int i = 0; i < tamvetor; i++){
    printf("%i, ", vetor[i]);
  }
  printf("\n");

  return 0;
}
