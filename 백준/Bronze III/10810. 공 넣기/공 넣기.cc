#include <stdio.h>

int main() {
    int box[100]={0};
    int N, M, i, j, k;
    
    scanf("%d%d", &N, &M);
    for (int a=0; a<M; a++) {
        scanf("%d%d%d", &i, &j, &k);
        for (int b=i; b<=j; b++) {
            box[b-1] = k;
        }
    }
    for (int c=0; c<N; c++) {
        printf("%d ", box[c]);
    }
}