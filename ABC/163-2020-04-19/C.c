#include<stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    int A[N];
    for (int i = 0; i <= N-2;i++){
        scanf("%d", &A[i]);
    }

    int x = 0;
    int y = 0;
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= N - 1;j++){
            if (A[j] == i){
                x++;
            } else {
                break;
            }
        }
        y += x;
        printf("%d\n", x);
        if (y == N - 1){
            for (; i < N;i++){
                printf("0\n");
            }
            break;
        }
        //puts("ne");
        x = 0;
    }

    return 0;
}
/*9 10
0
0
0
0
0
0
0
0
0*/