#include <stdio.h>
#include <math.h> 

int main()
{
    float temp;
    scanf("%f", &temp);
    
    if(temp == (int)temp){
    printf("%.0f",1.8 * temp + 32);
    }else{
        printf("%.1f",1.8 * temp + 32);
    }

    return 0;
}
