#include <stdio.h>

int main() {
    int A, B, C;
    int arr[10] = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    
    scanf("%d%d%d", &A, &B, &C);
    int total = A*B*C;
    
    int idx = 0;

    while (total>0) {
        arr[idx] = total%10;
        idx++;
        total/=10;
    }
    
    for (int i=0; i<10; i++) {
        int answer = 0;
        for (int j=0; j<10; j++) {
            if (arr[j] == 11)
                break;
            if (arr[j] == i)
                answer++;
        }
        printf("%d\n", answer);
    }
}