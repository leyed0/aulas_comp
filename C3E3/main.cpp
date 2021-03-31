#include<stdio.h>
#include<math.h>

int main(int argc, char**argv){
    float a, b, c;
    a = 2 + 3 * ( 23 - 12 + (( ( 123 / 34 ) + 10 ) / 2 - 1 * ( 45 - 12 ) ) / 3 );
    b = pow(( pow((2 * 3 ),2) - 1 ), 4);
    c = (2 + ( 2 * 3 - pow((4/20), 2 )) )/ (10 * pow(( ( 7 * 3 ) - 2 ), 3 ));
    printf("Resultado equação a: %f\n", a);
    printf("Resultado equação b: %f\n", b);
    printf("Resultado equação c: %f\n", c);
    return 0;
}




// Construa o algoritmo que calcule as seguintes expressões:
// a) 2 + 3 * { 23 – 12 + [ { ( 123 / 34 ) + 10 } / 2 – 1 * ( 45 – 12 ) ] / 3 }
// b) [ (2 * 3 ) ^2 – 1 ] ^ 4
// c) (2 + [ 2 * 3 – ( 4 / 20 ) ^ 2 ] )/ (10 * { [ ( 7 * 3 ) – 2 ] ^ 3 })