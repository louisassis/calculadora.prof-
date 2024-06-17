#ifndef CALCULADORA_H
#define CALCULADORA_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Estruturas de dados
typedef struct No
{
    double dado;
    struct No *proximo;
} No;

typedef struct
{
    No *topo;
} Pilha;

typedef struct NoStr
{
    char *dado;
    struct NoStr *proximo;
} NoStr;

typedef struct
{
    NoStr *topo;
} PilhaStr;

// Declaração das funções
void inicializar(Pilha *pilha);
void empilhar(Pilha *pilha, double valor);
double desempilhar(Pilha *pilha);

void inicializarStr(PilhaStr *pilha);
void empilharStr(PilhaStr *pilha, char *valor);
char *desempilharStr(PilhaStr *pilha);

double avaliarExpressaoPosfixada(const char *expressao);
char *converterParaInfixa(const char *expressao);
char *converterParaPrefixa(const char *expressao);

#endif
