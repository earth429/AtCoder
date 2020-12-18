#include<stdio.h>
#include<string.h>

int main(void)
{
    char s[11];
    char a[] = "A";
    char c[] = "C";
    char g[] = "G";
    char t[] = "T";
    char aa[] = "AA";
    char ac[] = "AC";
    char ag[] = "AG";
    char at[] = "AT";
    char ca[] = "CA";
    char cc[] = "CC";
    char cg[] = "CG";
    char ct[] = "CT";
    char ga[] = "GA";
    char gc[] = "GC";
    char gg[] = "GG";
    char gt[] = "GT";
    char ta[] = "TA";
    char tc[] = "TC";
    char tg[] = "TG";
    char tt[] = "TT";
    char aaa[] = 
    scanf("%s",s);

    int i;
    int len = strlen(s);
    for(i=0;i<=len-1;i++){
        if(s[i]=='C' || s[i]=='G' || s[i]=='T'){
            strcpy(s,a);
        }
    }

    printf("%s",s);


    
    
    return 0;
}