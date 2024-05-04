#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    char letra;
    struct No *proximo;
} No;

No* criarNo(char letra) {
    No novoNo = (No)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(1);
    }
    novoNo->letra = letra;
    novoNo->proximo = NULL;
    return novoNo;
}


void exibirA(No *inicio) {
    No *atual = inicio;
    while (atual != NULL) {
        printf("%c ", atual->letra);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {

    No *p = criarNo('P');
    No *q = criarNo('Q');
    No *r = criarNo('R');
    No *s = criarNo('S');
    No *t = criarNo('T');

    p->proximo = q;
    q->proximo = r;
    r->proximo = s;
    s->proximo = t;

    printf("Letra 'A' a partir de P: ");
    exibirA(p);
    printf("Letra 'A' a partir de Q: ");
    exibirA(q);
    printf("Letra 'A' a partir de R: ");
    exibirA(r);
    printf("Letra 'A' a partir de S: ");
    exibirA(s);
    printf("Letra 'A' a partir de T: ");
    exibirA(t);

    free(p);
    free(q);
    free(r);
    free(s);
    free(t);

    return 0;
}