#include<stdio.h>

int main(int argc, char**argv){
    float salario, agua, val;
    printf("Digite o salario e a quantidade de agua consumida em litros: ");
    scanf("%f %f", &salario, &agua);
    val = (agua/1000)*salario*2/100;
    printf("O valor da conta de agua é: %.2f\n", val);
    printf("O valor da conta de agua com desconto é: %.2f", val*(1-0.15));
    return 0;
}