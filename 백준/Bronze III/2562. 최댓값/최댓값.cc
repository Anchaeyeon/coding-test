#include <stdio.h>

int main(){
    int arr[9], index=0;
    int max = -1;
    for (int i=0; i<9; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > max) { 
            max = arr[i];
            index = i;
        }
    }
    
    printf("%d\n%d", max, index+1);
}