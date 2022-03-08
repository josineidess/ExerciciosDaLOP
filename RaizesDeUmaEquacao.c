
#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,delta,den,nume1,raiz1,nume2,raiz2;
    scanf("%d %d %d",&a,&b,&c);
    
    delta = b*b - 4*a*c;
    den = 2*a;
    nume1 = -1 * b + sqrt(delta);
    raiz1 = nume1 / den;
    nume2 = -1 * b - sqrt(delta);
    raiz2 = nume2 / den;
    
    printf("%d %d",raiz1,raiz2);
    
}
