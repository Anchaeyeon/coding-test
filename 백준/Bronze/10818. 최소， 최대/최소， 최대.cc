#include <stdio.h>

int main(){
    int N, arr[1000000];
    scanf("%d", &N);
    for (int i=0; i<N; i++)
        scanf("%d", &arr[i]);
    int max = arr[0];
    int min = arr[0];
    for(int i=1; i<N; i++) {
        if (max<arr[i])
            max = arr[i];
        if (min>arr[i])
            min = arr[i];
    }
    printf("%d %d", min, max);
}