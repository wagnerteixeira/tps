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

int main(int argc, char const *argv[]) {
  printf("antes\n");
  system("free");
  BigNum *big = criar();
  int i = 0;
  for(i=0; i < 100; i++){
    adicionarNumero(i, big);
  }

  //for(i=0; i < 10; i++){
  //  adicionarNumero(i, big);
  //}
  getchar();
  printf("depois alocado\n");
  system("free");
  destruir(big);
  getchar();
  printf("depois desalocado\n");
  system("free");
  return 0;
}
