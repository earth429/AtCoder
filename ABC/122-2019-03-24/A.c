#include<stdio.h>

int main(void)
{
    char a;
    scanf("%c",&a);
    if(a=='A'){
        puts("T");
    }else if(a=='T'){
        puts("A");
    }else if(a=='C'){
        puts("G");
    }else if(a=='G'){
        puts("C");
    }
    return 0;
}