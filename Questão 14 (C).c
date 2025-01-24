#include <stdio.h>

int main()
{
    int matriz[3][3], num, i, j, soma;
    
    soma = 0;
    
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o número da posição matriz[%i][%i]: ", i+1, j+1);
            scanf("%i", &num);
            
            matriz[i][j] = num;
        }
    };
    
    printf("\n");
    for(i=0; i<49; i++){
        if (i == 23){
            printf("///");
        };
        printf("-");
    };
    printf("\n\n");
    
    printf("Matriz 3x3: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%i ", matriz[i][j]);
            
        }
        printf("\n");
    }
    
    printf("\n\n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            soma += matriz[i][j];
            
        };
        printf("A soma dos elementos da %i° linha dá %i", i+1, soma);
        printf("\n");
        soma = 0;
    };
    
    return 0;
}
