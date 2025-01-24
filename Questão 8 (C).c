#include <stdio.h>

int main()
{
    int num, soma, i;
    
    soma = 0;
    num = 1;
    
    while(num != 0){
        printf("Digite valores inteiros no sistema (digite 0 para parar): ");
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
    
    printf("A soma dos valores dados é %i", soma);
    
    return 0;
}
