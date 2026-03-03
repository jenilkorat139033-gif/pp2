#include <stdio.h>
int main() {
    int n, i, pos=0, neg=0, even=0, odd=0;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] > 0) pos++;
        if(arr[i] < 0) neg++;
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive=%d\nNegative=%d\nEven=%d\nOdd=%d",
            pos, neg, even, odd);

    return 0;
}
