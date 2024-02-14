#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[20];
    scanf("%s", s1);
    
    for (int i=0; i<20; i++) {
        if (s1[i]>='A' && s1[i]<='Z') {
            s1[i] = s1[i]+('a'-'A');
        }
        else if (s1[i]>='a' && s1[i]<='z') {
            s1[i] = s1[i]-('a'-'A');
        }
    }
    printf("%s", s1);
}
