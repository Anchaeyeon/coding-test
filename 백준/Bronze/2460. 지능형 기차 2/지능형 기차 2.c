#include <stdio.h>

int main() {
    int train[10][2]={0};
    int answer=0;
    int max=0;
    for (int i=0; i<10; i++) {
        scanf("%d%d", &train[i][0], &train[i][1]);
        answer += train[i][1] - train[i][0];
        if (answer > max) {
            max = answer;
        }
    }
    printf("%d", max);
}