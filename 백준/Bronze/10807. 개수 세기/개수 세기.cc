#include <stdio.h>

int main(){
    int arr[100];
    int N, v, i, a=0;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
    for(i=0; i<N; i++) {
        if(arr[i] == v) a++;
    }
    printf("%d", a);
}