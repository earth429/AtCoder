#include <stdio.h>

int main(void){
    char x[10];
    int i,j;
    int y = 0;
    scanf("%s", &x);
    /*for (i = 0; i < 10;i++){
        scanf("%c", &x[i]);
    }*/

    for (i = 0; i < 10;i++){
        //puts("wan");
        
        if(x[2*i] != 'h' || x[(2*i)+1] != 'i'){
            y = 0;
        }
        if(x[i+1] != 'h' && x[i] == 'h' && x[i-1] != 'h'){
            // printf("i:%c,i+1:%c", x[i-1], x[i + 1]);
            // puts("neko");
            if(x[i+1] == 'i' && x[i+2] != 'i' && x[i] != 'i'){
                y = 1;
                }
                
            }
        
        if(y==1){
            for (j = i + 1; j < 10;j++){

            }
        }
        
        }
    
if(y == 1){
    printf("Yes");
}else{

    printf("No");
}
    return 0;

}