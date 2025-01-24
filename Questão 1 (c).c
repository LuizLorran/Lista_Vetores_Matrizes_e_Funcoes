#include <stdio.h>

int main() {
    float salario;
    
    printf("Informe o salário do empregado: ");
    scanf("%f", &salario);
    
    if(salario < 500){
        printf("Salário do funcionário com reajuste (15%): %f", salario*1.15);
    } else if(salario >= 500 && salario < 1000){
        printf("Salário do funcionário com reajuste (10%): %f", salario*1.10);
    } else{
printf("Salário do funcionário com reajuste (5%): %f", salario*1.05);
    };

    return 0;
}
