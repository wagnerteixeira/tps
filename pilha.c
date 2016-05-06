#ifndef STDIO_H
#define  STDIO_H
#include<stdio.h>
#endif

#ifndef STDLIB_H
#define  STDLIB_H
#include<stdlib.h>
#endif

#ifndef BIGNUM_H
#define  BIGNUM_H
#include "bigNum.h"
#endif

void FPVazia(TPilha *Pilha) {
  Pilha->Topo = malloc(sizeof(TCelula));
  Pilha->Fundo = Pilha->Topo;
  Pilha->Topo->Prox = NULL;
  Pilha->Tamanho = 0;
}
TPilha *iniPilha(){
  TPilha *pilha = malloc(sizeof(TPilha));
  FPVazia(pilha);
  return pilha;
}

int Vazia(TPilha Pilha) {
  return (Pilha.Topo == Pilha.Fundo);
}

void Empilha(TItem x, TPilha *Pilha) {
  Apontador Aux = malloc(sizeof(TCelula));
  Pilha->Topo->Item = x;
  Aux->Prox = Pilha->Topo;
  Pilha->Topo = Aux;
  Pilha->Tamanho++;
}

void Desempilha(TPilha *Pilha, TItem *Item) {
  if (Vazia(*Pilha)) {
    printf("Erro lista vazia\n");
  return;
  }
  Apontador q = Pilha->Topo;
  Pilha->Topo = q->Prox;
  *Item = q->Prox->Item;
  free(q);
  Pilha->Tamanho--;
}

int TamanhoPilha(TPilha Pilha) {
  return Pilha.Tamanho;
}

void DestruirPilha(TPilha *pilha){
  if(!Vazia(*pilha)){
    Apontador aux = pilha->Topo->Prox;
    Apontador aux2;
    while(aux != NULL){

      aux2 = aux->Prox;
      //printf("it %d p %p p2 %p\n", aux->Item, aux, aux2);
      free(aux);
      aux = NULL;
      //printf("p %p\n", aux);
      aux = aux2;
    }
  }
  free(pilha->Topo);
  free(pilha);
}

void imprimePilha(TPilha *pilha){
  if(Vazia(*pilha)){
    printf("Pilha vazia!\n");
    return;
  }
  Apontador aux = pilha->Topo->Prox;
  while(aux != NULL){
    printf("%d\n", aux->Item);
    aux = aux->Prox;
  }
}
