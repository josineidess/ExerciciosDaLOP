#include <stdio.h>

int main()
{
    int horas;
    scanf("%d", &horas);
    
    if(horas % 24 == 0){
        printf("%d", horas / 24);
    }else{
        printf("%.1f", ((float)horas) / 24);
    }
    
    return 0;
}
