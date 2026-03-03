#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;

    for (i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    // printing copied array
    for (i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

