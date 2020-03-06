#include <stdio.h>
#include <stdlib.h>

void selectionsort(int *vetor, int tamvetor){
  for(int seta = 0; seta < tamvetor; seta++){
    int menor = seta;

    int i = seta;
    for(; i < tamvetor; i++){
      if(vetor[i] < vetor[menor])
        menor = i;
    }

    int aux = vetor[seta];
    vetor[seta] = vetor[i];
    vetor[i] = aux;
  }
}

int main(){
  int vetor[10] = {1,-7,234,834,12,73,85,-93,0,61};
  int tamvetor = 10;

  for(int i = 0; i < tamvetor; i++){
    printf("%i,\n", vetor[i]);
  }

  printf("\n[pressione ENTER para continuar]");
  getchar();

  selectionsort(vetor, 10);

  printf("vetor SELECTIONSORTADO:\n");
  for(int i = 0; i < tamvetor; i++){
    printf("%i,\n", vetor[i]);
  }

  return 0;
}
