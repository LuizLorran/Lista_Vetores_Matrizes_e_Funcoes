#include <stdio.h>

int main()
{
    int num, soma, i;
    
    soma = 0;
    
    while(soma <= 100){
        printf("Digite números inteiros no sistema: ");
        scanf("%i", &num);
        
        soma += num;
    };
    
    printf("\n");
    for(i=0; i<49; i++){
        if (i == 23){
            printf("///");
        };
        printf("-");
    };
    printf("\n\n");
    
    printf("A soma final deu %i", soma);
    
    return 0;
}
