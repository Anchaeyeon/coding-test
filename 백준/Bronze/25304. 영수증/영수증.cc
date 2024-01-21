#include <stdio.h>

int main() {
    int X, N, a, b, total=0;
    scanf("%d%d", &X, &N);
    for (int i=1; i<=N; i++) {
        scanf("%d%d", &a, &b);
        total += a*b;
    }
    if(total==X)
        printf("Yes");
    else
        printf("No");
}