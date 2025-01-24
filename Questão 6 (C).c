#include <stdio.h>

int main()
{
    int inicial, final, i, soma;
    
    printf("Digite o início do intervalo: ");
    scanf("%i", &inicial);
    
    printf("Digite o final do intervalo: ");
    scanf("%i", &final);
    
    soma = ((final+inicial)*(final-(inicial+1)))/2;
    
    printf("\n");
    for(i=0; i<49; i++){
        if(i==23){
            printf("///");
        };
        printf("-");
        
    };
    printf("\n\n");
    
    printf("\nA soma dos números entre %i e %i é: \n%i", inicial, final, soma);
    
    return 0;
}
