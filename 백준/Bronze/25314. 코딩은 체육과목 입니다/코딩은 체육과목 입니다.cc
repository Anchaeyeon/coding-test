#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i+=4) {
        printf("long ");
    }
    printf("int");
}