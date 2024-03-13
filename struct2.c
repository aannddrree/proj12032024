#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void imprimir(struct Pessoa pessoa[], int qtd){
    int count = 0;
    printf("****************Impressão****************");
    while (count < qtd){
        printf("Nome: %s\n", pessoa[count].nome);
        printf("Idade: %d anos\n", pessoa[count].idade);
        printf("Altura: %.2f metros\n", pessoa[count].altura);
        count++;
    }
}

struct Pessoa lerPessoa()
{
    struct Pessoa pessoa;
    printf("Nome: ");
    scanf("%s", strcpy(pessoa.nome, "Andre"));
    printf("Idade: ");
    scanf("%d", &pessoa.idade);
    printf("Altura: ");
    scanf("%f", &pessoa.altura);
    return pessoa;
};

int main(){
    int qtd = 0;
    //Declarando uma variável do tipo Pessoa
    struct Pessoa pessoa[10];

    printf("Qtd. de Pessoas que deseja cadastrar: ");
    scanf("%d", &qtd);

    // Validação da quantidade de registros
    if (qtd >= 10) {
        printf("A Qtd. de Pessoas deve ser menor ou igual a 10");
        return 1;
    }

    int count = 0;
    while (count < qtd){
         pessoa[count] = lerPessoa();
        count++;
    }

    imprimir(pessoa, qtd);
    return 0;
}