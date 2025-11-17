
#include<stdio.h>
#include<stdlib.h>


typedef struct{
    int* vet;
    int n;
    int tam;
}heap;

int pai(int i) {
    return (i - 1) / 2;
}

int filho_esquerdo(int i) {
    return (2 * i) + 1;
}

int filho_direito(int i) {
    return (2 * i) + 2;
}



heap* heap_criar(int tama){
    heap* h;
    h = (heap*) malloc(sizeof(heap));
    h->n = tama;
    h->vet = (int*)malloc(h->n * sizeof(int));
    h->n = 0; 
    return h;
}

void heap_realoca(heap* h){
    if (h->n == h->tam) {
            int tam2 = h->tam * 2;
            int *novo_vetor = (int*) realloc(h->vet, tam2 * sizeof(int));     
                h->vet = novo_vetor;
                h->tam = tam2;
    }
}

void insere(heap* h, int num){
    heap_realoca(h);
    int pos = h->n;
    while(pos > 0){
        int poss = pai(pos);
        if(h->vet[poss] >= num){
            break;
        }
        h->vet[pos] = h->vet[poss];
        pos = poss;
    }
    h->vet[pos] = num;
    h->n++;
}

void imprimir_heap(heap* h){
    for(int i = 0; i < h->n; i++){
        int direita = filho_direito(i);
        int esquerda = filho_esquerdo(i);
        printf("NO [%d] = %d", i , h->vet[i]);
        if(esquerda < h->n){
            printf(" filho da esquerda: %d", h->vet[esquerda]);
        }
        else{
            printf(" filho: vazio");
        }
        if(direita < h->n){
            printf(" filho da direita: %d\n", h->vet[direita]);
        }
        else{
            printf(" filho: vazio\n");
        }
    }
}

void heap_troca(heap *h, int pos1, int pos2) {
    int temp = h->vet[pos1];
    h->vet[pos1] = h->vet[pos2];
    h->vet[pos2] = temp;
}

void heap_corrige_descendo(heap *h, int pos) {
    int pos_maior = pos;
    int esq = filho_esquerdo(pos);
    int dir = filho_direito(pos);
    if (esq < h->n && h->vet[esq] > h->vet[pos_maior]) {
        pos_maior = esq; 
    }
    if (dir < h->n && h->vet[dir] > h->vet[pos_maior]) {
        pos_maior = dir;
    }
    if (pos_maior != pos) {
        heap_troca(h, pos, pos_maior);
        heap_corrige_descendo(h, pos_maior);
    }
}

int heap_remove(heap *h) {
    if (h->n == 0) {
        printf("Erro: Heap vazio! Nao e possivel remover.\n");
        return -1; 
    }
    int valor_removido = h->vet[0];
    int ultimo_valor = h->vet[h->n - 1];
    h->vet[0] = ultimo_valor;
    h->n--;
    if (h->n > 0) {
        heap_corrige_descendo(h, 0); 
    }
    return valor_removido;
}
