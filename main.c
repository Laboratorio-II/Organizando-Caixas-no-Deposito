#include <stdio.h>
#include "ordenacao.h"

static int total_trocas = 0;

void registra_troca(int i, int j) {
    printf("Troca: %d %d\n", i, j);
    total_trocas++;
}

int main() {
    int n;
    int v[MAX_CAIXAS];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    selection_sort(v, n);

    printf("Ordem final:");
    for (int i = 0; i < n; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");
    printf("Total de trocas: %d\n", total_trocas);

    return 0;
}
