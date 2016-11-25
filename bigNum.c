#ifndef STDLIB_H
#define  STDLIB_H
#include<stdlib.h>
#endif

#ifndef BIGNUM_H
#define  BIGNUM_H
#include "bigNum.h"
#endif


#ifndef PILHA_H
#define  PILHA_H
#include "pilha.h"
#endif



BigNum *criar(){

  
  return iniPilha();
  
}

void adicionarNumero(int num, BigNum *bigNum){
  Empilha(num, bigNum);
}
void destruir(BigNum *bigNum){
  DestruirPilha(bigNum);
}

BigNum *somar(BigNum *bigNum1, BigNum bigNum2){
  return NULL;
}

BigNum *subtrair(BigNum *bigNum1, BigNum bigNum2){
  return NULL;
}

void imprimir(BigNum *bigNum){
  imprimePilha(bigNum);
  
}
