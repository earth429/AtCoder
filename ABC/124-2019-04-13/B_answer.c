#include<stdio.h>

int main(void)
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int h[n];

    for(i=0;i<n;i++){
        scanf("%d",&h[n]);
    }

    for(i=0;i<n;i++){
        for(j=1;j<i-1;j++){
            if(h[i]>=h[j]){
                sum++;
            }
        }
    }
    printf("%d",sum);


    return 0;   
}