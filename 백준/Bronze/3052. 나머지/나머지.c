#include <stdio.h>

int main() {
    int number[42]={0};
    int input[10];
    int count=0, a;
    for (int i=0; i<10; i++) {
        scanf("%d", &a);
        input[i] = a;
        number[input[i]%42] = 1;
    }
    for (int j=0; j<42; j++) {
        if (number[j]==1) {
            count++;
        }
    }
    printf("%d", count);
}