#include <stdio.h>

int main()
{
    int N, num, i, menor, maior;
    
    printf("Digite quantos números deseja comparar: ");
    scanf("%i", &N);
    
    maior = 0;
    
    for(i=1; i<=N; i++){
        printf("Digite os valores: ");
        scanf("%i", &num);
        
        if(num > maior){
            maior = num;
        };
        
    };
    
    printf("\n");
    for(i=0; i<49; i++){
        if (i == 23){
            printf("///");
        };
        printf("-");
    };
    printf("\n\n");
    
    printf("O maior número entre os valores dados é %i", maior);
    
    return 0;
}
