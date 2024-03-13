#include <stdio.h>
#include <string.h>

// Definição da struct Pessoa
struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void imprimir(struct Pessoa pessoa){
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);
}

int main(){

    //Declarando uma variável do tipo Pessoa
    struct Pessoa pessoa;

    // Atribuindo valores aos membros da struct
    strcpy(pessoa.nome, "Andre");
    pessoa.idade = 36;
    pessoa.altura = 1.82;

    // Imprimindo os dados da pessoa
    imprimir(pessoa);

    return 0;
}