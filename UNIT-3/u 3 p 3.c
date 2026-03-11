#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min) {
    *max = *min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int max, min;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    void (*ptr)(int[], int, int*, int*) = findMaxMin;

    ptr(arr, n, &max, &min);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
