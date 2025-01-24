/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float kW, salario_minimo, kW_gastos, i;
    
    printf("Valor do salário mínimo atual (R$): ");
    scanf("%f", &salario_minimo);
    
    printf("\nQuantidade de quilowatts (kW) gastos no mês: ");
    scanf("%f", &kW_gastos);
    
    kW = salario_minimo/700;
    kW_gastos = kW_gastos*kW;
    
    printf("\n");
    for(i=0; i<49; i++){
        if (i == 23){
            printf("///");
        };
        printf("-");
    };
    printf("\n\n");
    
    printf("Valor por kW: R$%.2f", kW);
    printf("\nValor total a ser pago: R$%.2f", kW_gastos);
    printf("\nValor total pago com 10\%% de desconto: R$%.2f", kW_gastos*0.9);
    

    return 0;
}