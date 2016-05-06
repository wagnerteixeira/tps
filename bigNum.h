#ifndef PILHA_H
#define  PILHA_H
#include "pilha.h"
#endif

typedef TPilha BigNum;

BigNum *criar();
void destruir(BigNum *bigNum);
BigNum *somar(BigNum *bigNum1, BigNum bigNum2);
BigNum *subtrair(BigNum *bigNum1, BigNum bigNum2);
void imprimir(BigNum *bigNum);
void adicionarNumero(int num, BigNum *bigNum);
