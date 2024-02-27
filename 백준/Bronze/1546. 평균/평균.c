#include <stdio.h>

int N,i;
float M, score[1000];

int main() {
    scanf("%d", &N);
    for(i=0; i<N; i++) scanf("%f", &score[i]);
    M=score[0];
    for(i=0; i<N; i++) {
        if(M < score[i]) M = score[i];
    }
    
    float sum = 0;
    for(i=0; i<N; i++) sum += score[i]/M*100;
    printf("%f", sum / N);
}