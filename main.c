#include <stdio.h>
#include "ordenacao.h"

int main() {
    int n;
    int v[MAX_CAIXAS];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int trocas = selection_sort(v, n);

    printf("Ordem final:");
    for (int i = 0; i < n; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");
    printf("Total de trocas: %d\n", trocas);

    return 0;
}
