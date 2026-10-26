#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[50];
    char perfil[20];
    char confirmacao[50];
    char mensagem[100];
    char descricaoPerfil[20];

    printf("===== CADASTRO DE USUARIOS =====\n\n");

    printf("Digite seu nome: ");
    scanf("%49s", nome);

    printf("Digite seu perfil: ");
    scanf("%19s", perfil);

    /* Identifica o perfil informado com strcmp() */
    if (strcmp(perfil, "ADMIN") == 0) {
        strcpy(descricaoPerfil, "Administrador");
    } else if (strcmp(perfil, "COMUM") == 0) {
        strcpy(descricaoPerfil, "Comum");
    } else {
        printf("\nPerfil invalido! Use ADMIN ou COMUM.\n");
        return 1;
    }

    /* Copia o nome para a variavel de confirmacao com strcpy() */
    strcpy(confirmacao, nome);

    /* Monta a mensagem de boas-vindas com strcpy() + strcat() */
    strcpy(mensagem, "Bem-vindo(a), ");
    strcat(mensagem, confirmacao);
    strcat(mensagem, "!");

    printf("\n===== DADOS CADASTRADOS =====\n");
    printf("Nome: %s\n", confirmacao);
    printf("Quantidade de caracteres: %zu\n", strlen(nome));
    printf("Perfil: %s\n", descricaoPerfil);

    printf("\n%s\n", mensagem);
    printf("Cadastro realizado com sucesso.\n");

    return 0;
}
