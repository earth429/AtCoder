#include<stdio.h>
#include<string.h>

/*void str_count(const char s[],int *cnt)
{
    int i;
    for(i=0;i<=11;i++){
        if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T')
            *cnt++;
    }
}*/

int main(void)
{
    char s[11];
    int cnt = 0;
    int save = 0;
    int flag = 0;
    int con = 0;
    int cont = 0;

    scanf("%s",s);
    int i;
    int len = strlen(s);
    for(i=0;i<=len-1;i++){
        if(s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T'){
            cnt++;
            con++;
        }else if(cnt!=0){
            save = cnt;
            //cnt--;
            flag++;
            cont = con;
            con=0;
        }
    }
    //printf("%d\n",flag);
    if(flag!=0){
        printf("%d",cont);
    }else{
      printf("%d",cnt);  
    }
    
    
    return 0;
}