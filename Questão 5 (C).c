#include <stdio.h>

int main()
{
    int num, divisores, i, soma;
    
    printf("Digite um inteiro positivo: ");
    scanf("%i", &num);
    
    printf("\n");
    for(i=0; i<49; i++){
        if(i==23){
            printf("///");
        };
        printf("-");
        
    };
    printf("\n\n");
    
    soma = 0;
    
    printf("Divisores de %i: \n", num);
    for(i=1; i <= num; i++){
        if(num%i == 0){
            printf("%i ", i);
            soma += 1;
        }
    };
    
    printf("\nNúmero de divisores: \n%i", soma);
    
    return 0;
}
