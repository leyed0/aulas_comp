#include<stdio.h>

int main(int argc, char**argv){
    int t, q;
    int c;
    printf("Tipo de produto? (1=Frios, 2=Manteiga)");
    scanf("%d", &t);
    printf("quantidade do produto?\n");
    scanf("%d", &q);
    if(t==1){ //frios
        //c = (1-(float)q/200)*500;
        c = 500-(5*q/2);
        printf("pode colocar %d potes de manteiga para ter a capacidade maxima de transporte", c);
    }
    else if (t==2)
    {
        c = 200-(2*q/5);
        printf("pode colocar %d frios para ter a capacidade maxima de transporte", c);
    }
    
    return 0;
}