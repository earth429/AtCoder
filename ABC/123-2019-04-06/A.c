#include<stdio.h>

int main(void)
{
    int a,b,c,d,e,k;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&k);

    int ab = b-a;
    int ac = c-a;
    int ad = d-a;
    int ae = e-a;
    int bc = c-a;
    int bd = d-b;
    int be = e-b;
    int cd = d-c;
    int ce = e-c;
    int de = e-d;
    
    if(k>=ab&&k>=ac&&k>=ad&&k>=ae&&k>=bc&&k>=bd&&k>=be&&k>=cd&&k>=ce&&k>=de){
        puts("Yay!");
    }else{
        puts(":(");
    }

    return 0;

}