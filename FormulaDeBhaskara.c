#include <stdio.h>
#include <math.h>

int main(){
    int a = 1, b = 8, c = -9;
    int delta = b*b - 4*a*c;
    int den = 2*a;
    int num1 = -1 * b + sqrt(delta);
    int raiz1 = num1 / den;
    int num2 = -1 * b - sqrt(delta);
    int raiz2 = num2 / den;
    printf("%d %d", raiz1, raiz2);
    
    return 0;
}
