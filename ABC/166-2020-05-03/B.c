#include<stdio.h>

int main(){
    int N, K;

    scanf("%d %d", &N, &K);
    //printf("N:%d,K:%d\n", N, K);//

    int d[K];
    int A[K][N];
    int sunuke[N];
    int trick = 0;

    int i,j;

    for (i = 0; i < N;i++){
        sunuke[i] = 0;
    }

        for (i = 0; i < K; i++)
        {
            scanf("%d", &d[i]);
            //printf("d:%d\n", d[i]); //
            for (j = 0; j < d[i]; j++)
            {
                scanf("%d", &A[i][j]);
                //printf("A:%d\n", A[i][j]);
                sunuke[A[i][j] - 1] += 1;
                //printf("j:%d\n", j);
            }
        }

    for (i = 0; i < N;i++){
        //printf("sunuke:%d\n", sunuke[i]);
        if(sunuke[i] == 0){
            trick++;
        }
    }

    printf("%d", trick);

    return 0;
}