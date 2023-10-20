#include <stdio.h>
#define TAM = 5

void visualizarDados(int vetor[], int tam){
    for(int i = 0; i < tam; i++){
        printf("\n%d", vetor[i]);
    }
}

void visualizarDados2(int vetor[5]){
    for(int i = 0; i < 5; i++){
        printf("\n%d", vetor[i]);
    }
}

void mostrarNomes(char lista[TAM][20], int qtd){
    for(int i = 0; i < 5; i++){
        printf("\n%s", lista[i]);
    }
}

main(){
    int vet[5] = {1, 2, 9, 8, 10};
    char nomes[5][20] = {"ana", "pedro", "lucas", "luan", "lara"};
    int tam = 5;
    visualizarDados(vet, tam);
    printf(".............");
    visualizarDados2(vet);
    printf(".............");
    mostrarNomes(nomes, TAM);
}