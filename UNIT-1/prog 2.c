#include <stdio.h>
#include <conio.h>

int main() {
    int n, i;
    float sum = 0, avg, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    avg = sum / n;
    printf("Total = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
