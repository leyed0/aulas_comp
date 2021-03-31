#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
    int n;
    printf("informar n: ");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("1");
        break;
        case 2:
        printf("1\t2\n3\t4");
        break;
        default:
        for(int j=1; j<=n;j++){
            for(int i=1; i<=n;i++){
                if(j==1) printf("%.2f\t", sqrt(i));
                else if(i==j) printf("%.2f\t", (float)i*i);
                    else printf("\t");
            }
            printf("\n");
        }
        break;
    }
    return 0;
}



// Construa o algoritmo que calcule as seguintes expressões:
// a) 2 + 3 * { 23 – 12 + [ { ( 123 / 34 ) + 10 } / 2 – 1 * ( 45 – 12 ) ] / 3 }
// b) [ (2 * 3 ) ^2 – 1 ] ^ 4
// c) (2 + [ 2 * 3 – ( 4 / 20 ) ^ 2 ] )/ (10 * { [ ( 7 * 3 ) – 2 ] ^ 3 })