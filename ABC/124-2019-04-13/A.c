#include<stdio.h>

int main(void)
{
    int a,b,sum=0,i;
    scanf("%d%d",&a,&b);
    for(i = 0; i < 2; i++)
    {
        if(a>b){
        sum += a;
        a--;
    }else{
        sum += b;
        b--;
    }
    }
    
    printf("%d",sum);

    
    return 0;
}