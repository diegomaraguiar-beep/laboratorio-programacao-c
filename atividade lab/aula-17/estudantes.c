#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char codigo[10];
    char copia[50];
    char mensagem[100];
    char curso[40];

    printf("===== IDENTIFICACAO ACADEMICA =====\n\n");

    printf("Nome do estudante: ");
    scanf("%49s", nome);

    printf("Codigo do curso: ");
    scanf("%9s", codigo);

    /* Identifica o curso com strcmp() */
    if (strcmp(codigo, "CC") == 0) {
        strcpy(curso, "Ciencia da Computacao");
    } else if (strcmp(codigo, "SI") == 0) {
        strcpy(curso, "Sistemas de Informacao");
    } else {
        printf("\nCodigo de curso invalido! Use CC ou SI.\n");
        return 1;
    }

    /* Armazena o nome em outra variavel com strcpy() */
    strcpy(copia, nome);

    /* Monta a mensagem "Ola, Nome!" com strcpy() + strcat() */
    strcpy(mensagem, "Ola, ");
    strcat(mensagem, copia);
    strcat(mensagem, "!");

    printf("\n===== RESULTADO =====\n");
    printf("Estudante: %s\n", copia);
    printf("Curso: %s\n", curso);
    printf("Caracteres no nome: %zu\n", strlen(nome));

    printf("\n%s\n", mensagem);

    return 0;
}
