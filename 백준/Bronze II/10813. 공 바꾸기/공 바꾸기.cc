#include <stdio.h>

int main() {
    int box[100]={0};
    int N, M, i, j;
    int temp=0;
    for (int a=0; a<100; a++) {
        box[a] += a+1;
    }
    scanf("%d%d", &N, &M);
    for (int b=0; b<M; b++) {
        scanf("%d%d", &i, &j);
        temp = box[i-1];
        box[i-1] = box[j-1];
        box[j-1] = temp;
    }
    for (int c=0; c<N; c++) {
        printf("%d ", box[c]);
    }
}