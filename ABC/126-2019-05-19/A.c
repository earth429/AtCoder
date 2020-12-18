#include<stdio.h>
#include <ctype.h>

int main(void)
{
    int n,k,i;
    

    scanf("%d %d",&n,&k);
    char s[n-1];
    scanf("%s",s);

    if(s[k-1] == 'A'){
        s[k-1] = 'a';
    }else if(s[k-1] == 'B'){
        s[k-1] = 'b';
    }else if(s[k-1] == 'C'){
        s[k-1] = 'c';
    }

    printf("%s",s);

    return 0;
}