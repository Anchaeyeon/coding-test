#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    int C[3]={0}, D[3]={0};
    int answer1=0, answer2=0;
    scanf("%d%d", &A, &B);
    
    C[0] = A%10;
    A = A/10;
    C[1] = A%10;
    A = A/10;
    C[2] = A;
    
    D[0] = B%10;
    B = B/10;
    D[1] = B%10;
    B = B/10;
    D[2] = B;
    
    for (int i=0; i<3; i++) {
        answer1 += C[i]*pow(10, 2-i);
        answer2 += D[i]*pow(10, 2-i);
    }
    
    if (answer1>answer2)
        printf("%d", answer1);
    else
        printf("%d", answer2);
}