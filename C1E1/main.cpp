#include<stdio.h>

int main(int argc, char**argv){
    float l, c;
    printf("informe a largura e o comprimento da mesa: ");
    scanf("%f %f", &l, &c);
    printf("A área da mesa é: %.2f", l*c);
    return 0;
}