#include <stdio.h>

int main()
{
    int n1, n2, soma;
    scanf("%d %d", &n1, &n2);
    soma = n1 + n2;
    
    if(soma % 2 == 0){
        printf("A soma é par!");
    }else {
        printf("A soma é ímpar!");
    }

    return 0;
}
