
typedef int TItem;

typedef struct Celula *Apontador;

typedef struct Celula {
  TItem Item;
  Apontador Prox;
} TCelula;

typedef struct Pilha {
  Apontador Fundo;
  Apontador Topo;
  int Tamanho;
} TPilha;

int Vazia(TPilha Pilha);
void Empilha(TItem x, TPilha *Pilha);
void Desempilha(TPilha *Pilha, TItem *Item);
int Tamanho(TPilha Pilha) ;
TPilha *iniPilha();
void imprimePilha(TPilha *pilha);
void DestruirPilha(TPilha *pilha);
