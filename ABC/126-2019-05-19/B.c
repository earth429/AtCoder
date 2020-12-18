#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    char c1,c2,c3,c4;
    char c[3];
    int n1,n2,n3,n4,s1,s2;


    scanf("%s",&c);

    c1 = c[0];
    c2 = c[1];
    c3 = c[2];
    c4 = c[3];

    //printf("%c%c%c%c",c1,c2,c3,c4);

    n1 = c1 - '0';
    n2 = c2 - '0';
    n3 = c3 - '0';
    n4 = c4 - '0';

    //printf("%d%d%d%d",n1,n2,n3,n4);

    if(n1!=0){
        n1;
        n1+=(9*n1);
    }

    if(n3!=0){
        n3;
        n3+=(9*n3);
    }
    
    /*if(n3>1){
        n3+10;
    }*/
    s1 = n1+n2;
    s2 = n3+n4;

    //printf("%d:%d:%d\n",n1,s1,s2);

    if(s1 == 0||s2 == 0||s1>31&&s2>31){
        puts("NA");
    }else if(s1>=1&&s1<=12&&s2>=1&&s2<=12){
        puts("AMBIGUOUS");
    }else if(s1<=12&&s2>1&&s2<99){
        puts("MMYY");
    }/*else if(s2>31){
        puts("NA");
    }*/
    else if(s2<=12&&s1>1&&s1<99){
        puts("YYMM");
    }
    return 0;
}