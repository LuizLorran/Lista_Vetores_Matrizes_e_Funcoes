#include <stdio.h>

int main()
{
    int matriz[2][3], transposta[3][2], num, i, j;
    
    for(i=0; i<2; i++){
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
    
    printf("Matriz 2x3: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            printf("%i ", matriz[i][j]);
            
        }
        printf("\n");
    }
    
    printf("\nTransposta 3x2: \n");
    for(i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%i ", matriz[j][i]);
            
        }
        printf("\n");
    }
    
    return 0;
}
