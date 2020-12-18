#include<stdio.h>

int main(void)
{
    int n,best=0,i,sum=0;
    scanf("%d",&n);
    int h[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
        if(best<=h[i]){
            best=h[i];
            sum++;
        }
    }
    printf("%d\n",sum);


    return 0;   
}