#include <stdio.h>

int main()
{
    char texto[50];
    int vezes;
    
    gets(texto);
    scanf("%d", &vezes);
    
    while(vezes > 0){
        printf("%s\n", texto);
        vezes -= 1;
    }
    
    return 0;
}
