#include <stdio.h>

int main() {
    char S[1000];
    int i;
    scanf("%s%d", &S, &i);
    printf("%c", S[i-1]);
}