#include<stdio.h>

int main(int argc, char**argv){
    int pe, ca;

    printf("Informe a quantidade de pés e de cabeças: ");
    scanf("%d %d", &pe, &ca);
    //g*2+c*4=pe -> 2(ca-c)+4c=pe -> 2ca+2c=pe ->2c=pe-2ca ->c=(pe/2)-ca
    //g+c=ca -> g=ca-c -> g=ca-(pe/2)+ca = 2ca-(pe/2)
    
    printf("quantidade de coelhos: %d\n", pe/2-ca);
    printf("quantidade de galinhas: %d\n", 2*ca-(pe/2));
    return 0;
}