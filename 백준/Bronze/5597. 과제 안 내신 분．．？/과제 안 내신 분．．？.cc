#include <stdio.h>

int main() {
    int student[30]={0};
    int n;
    for (int i=1; i<=28; i++) {
        scanf("%d", &n);
        student[n-1] = n;
    }
    for (int j=1; j<=30; j++) {
        if (student[j-1]==0) {
            printf("%d\n", j);
        }
    }
}