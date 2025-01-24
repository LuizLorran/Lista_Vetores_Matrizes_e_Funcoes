/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fatorial(int a){
    if(a == 1 || a == 0){
        return 1;
    };
    
    return a*fatorial(a-1);
    
}

int main()
{
    int num;
    
    printf("Digite um inteiro positivo no programa: ");
    scanf("%i", &num);
    
    printf("O fatorial do número dado é %d", fatorial(num));

    return 0;
}