#include <stdio.h>
#define MAX_SIZE 105

int N,M,i,j,a,b,t;
int arr[MAX_SIZE];

int main() {
    scanf("%d%d", &N, &M);
    for(i=1; i<=N; i++) arr[i] = i;
    
    for(i=0; i<M; i++) {
        scanf("%d%d", &a, &b);
        for(j=0; j<(b-a)/2 + 1; j++) {
            t = arr[a+j];
            arr[a+j] = arr[b-j];
            arr[b-j] = t;
        }
    }
    
    for(i=1; i<=N; i++) printf("%d ", arr[i]);
}