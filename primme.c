#include <stdio.h>

int main() {
    int i, j, flag;
    printf("Prime numbers from 1 to 100 are:\n");
    for(i = 2; i <= 100; i++) {
        flag = 1;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 0;
                break;
            }
        }
        if(flag == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
