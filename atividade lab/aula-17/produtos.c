#include <stdio.h>
#include <string.h>

int main(void) {
    char produto[50];
    char categoria[20];
    char copia[50];
    char descricao[100];
    char descricaoCategoria[20];

    printf("===== CADASTRO DE PRODUTOS =====\n\n");

    printf("Nome do produto: ");
    fgets(produto, sizeof(produto), stdin);
    produto[strcspn(produto, "\n")] = '\0';   /* remove o \n do fgets */

    printf("Categoria: ");
    scanf("%19s", categoria);

    /* Identifica a categoria com strcmp() */
    if (strcmp(categoria, "HARDWARE") == 0) {
        strcpy(descricaoCategoria, "Hardware");
    } else if (strcmp(categoria, "PERIFERICO") == 0) {
        strcpy(descricaoCategoria, "Periferico");
    } else {
        printf("\nCategoria invalida! Use HARDWARE ou PERIFERICO.\n");
        return 1;
    }

    /* Copia o nome do produto para outra variavel com strcpy() */
    strcpy(copia, produto);

    /* Gera a descricao no formato "Produto: Nome" com strcpy() + strcat() */
    strcpy(descricao, "Produto: ");
    strcat(descricao, copia);

    printf("\n===== RESUMO =====\n");
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));
    printf("Categoria: %s\n", descricaoCategoria);

    printf("\nDescricao: %s\n", descricao);
    printf("Cadastro concluido!\n");

    return 0;
}
