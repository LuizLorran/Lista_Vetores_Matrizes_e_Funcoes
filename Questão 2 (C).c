#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    
    printf("Nome do usuário: ");
    fgets(nome, 50, stdin);
    
    printf("Idade: ");
    scanf("%i", &idade);
    
    if(idade <=10){
        printf("\nO usuário %s deve pagar 5 reais pelo bilhete.", nome);
    } else if(idade >10 && idade <=20){
          printf("\nO usuário %s deve pagar 10 reais pelo bilhete.", nome);
    } else {
          printf("\nO usuário %s deve pagar 15 reais pelo bilhete.", nome);
    }

    return 0;
}
