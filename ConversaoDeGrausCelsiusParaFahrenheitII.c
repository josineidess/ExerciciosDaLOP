#include <stdio.h>
#include <math.h>

int main(){
    float c, far;
    scanf("%f",&c);
    far = 9/5 * c + 32;
    if(far == (int)far){
      printf("%.0f",far);    
    }else{
      printf("%.1f",far);
    }
    
    
    return 0;
}
