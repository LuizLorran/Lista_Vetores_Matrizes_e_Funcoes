#include <stdio.h>

int main()
{
    int i, pares[50], impares[50];
    
    printf("Números pares entre 1 e 100 : \n");
    for(i=2; i<=100; i += 2){
        printf("%i ", i);
    };
    
    printf("\n\nNúmeros ímpares entre 1 e 100 : \n");
    for(i=1; i<=100; i += 2){
        printf("%i ", i);
    };
    
    

    return 0;
}
