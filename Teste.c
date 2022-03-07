#include <stdio.h>

int main()
{
    char texto[50];
    
    gets(texto);
    printf("Oi %s\n", texto);
    
    return 0;
}
