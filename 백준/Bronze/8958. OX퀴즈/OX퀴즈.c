#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a);
    int count2;
    int total;
    
    char** arr = (char**)malloc(sizeof(char*)*a);
    for (int i=0; i<a; i++) {
        arr[i] = (char*)malloc(sizeof(char)*80);
    }
    
    for (int i=0; i<a; i++) {
        scanf("%s", arr[i]);
    }
    
    for (int i=0; i<a; i++) {
        total=0; count2=0;
        for (int j=0; j<80; j++) {
            if (arr[i][j] == 'O') {
                count2++;
            }
            else {
                count2=0;
            }
            total += count2;
        }
        printf("%d\n", total);
    }
}