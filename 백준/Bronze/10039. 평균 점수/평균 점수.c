#include <stdio.h>

int main() {
    int a;
    int jumsu=0;
    for (int i=0; i<5; i++) {
        scanf("%d", &a);
        if (a<40) {
            jumsu+=40;
        }
        else {
            jumsu+=a;
        }
    }
    printf("%d", jumsu/5);
}