#include <stdio.h>

int main() {
    int a;
    int count1=0, count2=0;
    int min=100;
    for (int i=0; i<7; i++) {
        scanf("%d", &a);
        if (a%2==1) {
            count1+=a;
            if (a<min) {
                min = a;
            }
        }
        else {
            count2=0;
            count2=(-1);
        }
    }
    if (count1>0) {
        printf("%d\n", count1);
        printf("%d", min);
    }
    else if (count2<0) {
        printf("%d", count2);
    }
}