#include <stdio.h>

int main() {
    int H, M;
    scanf("%d\n%d", &H, &M);
    M -= 45;
    if (M<0) {
        H -= 1;
        M += 60;
        if(H<0) {
            H += 24;
        }
    }
    printf("%d %d", H, M);
}