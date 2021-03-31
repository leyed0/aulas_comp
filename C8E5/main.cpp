#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
    float a, b, c;
    printf("Informe os valores dos catetos: ");
    scanf("%f %f",&a, &b);
    c = sqrt(pow(a,2)+pow(b,2));
    printf("O valor da hipotenuza é: %.2f", c);
    return 0;
}