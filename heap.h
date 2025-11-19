
#ifndef heap_h
#define heap_h

#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int* vet;
    int n;
    int tam;
}heap;

int pai(int i);
int filho_esquerdo(int i);
int filho_direito(int i);
heap* heap_criar(int tama);
void heap_realoca(heap* h);
void insere(heap* h, int num);
void imprimir_heap(heap* h);
void heap_troca(heap *h, int pos1, int pos2);
void heap_corrige_descendo(heap *h, int pos);
int heap_remove(heap *h);
void heap_destroi(heap *h);

#endif
