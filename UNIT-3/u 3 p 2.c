#include <stdio.h>

void area(float *r, float *result) {
    *result = 3.14159 * (*r) * (*r);
}

int main() {
    float radius, area_result;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area(&radius, &area_result);

    printf("Area of circle = %.2f\n", area_result);

    return 0;
}
