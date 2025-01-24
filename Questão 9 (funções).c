/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void saudacao (float hora){
    if(hora >= 6 && hora <12){
        printf("Bom dia!");
    }
    else if (hora >= 12 && hora < 18){
        printf("Boa tarde!");
    }
    else{
        printf("Boa noite!");
    };
    
}

int main()
{
    float hora;
    
    printf("Que horas são? ");
    scanf("%f", &hora);
    
    saudacao(hora);

    return 0;
}