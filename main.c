
#include "heap.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int main(){
    bool rodando = true;
    int tam;
    printf("digite um tamanho inicial para sua arvore heap");
    scanf("%d", &tam);
    heap* h = heap_criar(tam);
    while(rodando){
        int estado;
        printf("1 - inserir\n2- remover\n3 - imprimir heap\n4 - sair\n");
        scanf("%d", &estado);
        switch(estado){

            case 1:{
                int num;
                printf("digite o numero que deseja inserir\n");
                scanf("%d", &num);
                insere(h, num);
                break;
            }
            case 2:
                int removido = heap_remove(h);
                printf("Valor removido: %d\n", removido);
                break;
            case 3:
                imprimir_heap(h);
                break;
            case 4:
                rodando = false;
        }

    }
    heap_destroi(h);
    return 0;
}
