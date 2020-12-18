#include<stdio.h>

int main(){
    int N,M;

    scanf("%d %d", &N, &M);
    int A[M];
    for (int i = 0; i <= M-1;i++){
        scanf("%d", &A[i]);
        N = N - A[i];
        // printf("%d", A[i]);
    }
    if(N<0){
        printf("-1");
    }else{
        printf("%d", N);
    }
    
    return 0;
}