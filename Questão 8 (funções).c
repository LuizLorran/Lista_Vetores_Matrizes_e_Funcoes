/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int multiplica(int a, int b){
    return a*b;
}

int main()
{
    int num1, num2;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &num1);
    
    printf("Digite um segundo número inteiro: ");
    scanf("%i", &num2);
    
    printf("O produto dos números dados dá %i", multiplica(num1, num2));

    return 0;
}