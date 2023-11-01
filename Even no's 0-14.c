#include <stdio.h>

int main() {
    int i;
    printf("Even numbers between 1 to 100\n");

    for(i = 1; i <= 14; i++) {
        /* Even numbers are divisible by 2 */
        if(counter%2 == 0) {
            /* counter is even, print it */
            printf("%d ", i);
        }
    }
    return 0;
}
