#include<stdio.h>

int main(void)
{
    int n,h;
    int best=0;
    int i=0;
    int sum=0;
    scanf("%d",&n);
    
    while(i<n){
        scanf("%d",&h);
        if(i=0){
            best=h;
        }
        if(h>=best){
            sum++;
            if(h>best){
                best = h;
            }
        }
        i++;
        // if(i=n){
        //     break;
        // }
    }
    printf("%d",sum);


    return 0;   
}