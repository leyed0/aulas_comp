#include<stdio.h>

int main(int argc, char**argv){
    float sa;

    printf("Informe os salário atual: ");
    scanf("%f", &sa);

    printf("O novo salário é: %.2f", sa*(1+15.3/100));
    return 0;
}