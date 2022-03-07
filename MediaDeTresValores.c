#include <stdio.h>

int main()
{
    float n1, n2, n3;
    scanf("%f %f %f",&n1,&n2,&n3);
    float media = (n1 + n2 + n3)/3;
    
    if(media == (int)media){
      printf("%.0f",media);
    }else{
      printf("%.1f",media);
    }

    return 0;
}
