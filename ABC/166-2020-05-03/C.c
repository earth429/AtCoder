#include<stdio.h>

int main(){
    int N, M;
    scanf("%d %d", &N, &M);

    int H[N];
    int i, j;
    for (i = 0; i < N;i++){
        scanf("%d", &H[i]);
    }

    int A[M];
    int B[M];

    for (i = 0; i < M;i++){
        scanf("%d %d", &A[i], &B[i]);
    }

    int takasa_A[N];
    int takasa_B[N];
    int yoi = 0;
    int check[N];

    for (i = 0; i < N;i++){
        check[i] = 0;
    }

        for (i = 0; i < M; i++)
        {
            takasa_A[i] = H[A[i]];
            takasa_B[i] = H[B[i]];
            if (takasa_A[i] < takasa_B[i])
            {
                if (check[B[i]] == 0){
                    yoi++;
                    check[B[i] - 1] += 1;
                }
                
            }
            else if (takasa_A[i] > takasa_B[i])
            {
                if (check[A[i]] == 0){
                    yoi++;
                    check[A[i] - 1] += 1;
                }
                
            }
        }
        for (i = 0; i < N;i++){
            if(check[i] != 0){
                yoi++;
            }
    }

    printf("%d", yoi);
    return 0;
}