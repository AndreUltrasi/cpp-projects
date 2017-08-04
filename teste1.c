#include <stdio.h>
int vet[]= {1,2,3,4,5,6};

int somaIntervalo(int vetor[], int comeco, int fim){
  int soma = 0;
  for (int i = comeco; i < fim; i++){
    printf("%d",vetor[i]);
  }
  return 1;
}

int main(){
  int arr[] = {0,0,0,0,0};
  somaIntervalo(vet[],0,3);
}