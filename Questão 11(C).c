#include <stdio.h>

int main()
{
    int i, num, vetor[10], contador;
    
    for(i=0; i<10; i++){
        printf("Insira valores inteiros na lista: ");
        scanf("%i", &num);
        
        vetor[i] = num;
    };
    
    contador = 0;
    
    printf("\n\nDigite um valor da lista: ");
    scanf("%i", &num);
    
    printf("\n");
    for(i=0; i<49; i++){
        if (i == 23){
            printf("///");
        };
        printf("-");
    };
    printf("\n\n");
    
    for(i=0; i<10; i++){
        if(num == vetor[i]){
            contador += 1;
            printf("O número %i está presente na lista na posição %i\n", num, i+1);
        }
    };
    
    if(contador == 0){
        printf("O número %i não está na lista.", num);
    }
    
    return 0;
}
