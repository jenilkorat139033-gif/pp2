#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max;
    float sum = 0, avg;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    avg = sum / n;

    printf("Maximum = %d\n", max);
    printf("Average = %.2f\n", avg);

    return 0;
}

