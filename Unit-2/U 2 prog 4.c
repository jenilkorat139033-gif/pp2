#include <stdio.h>

struct Student {
    char name[50];
    float score;
};

int main() {
    struct Student s[5], temp;
    int i, j;

    for(i = 0; i < 5; i++) {
        printf("Enter Name and Score: ");
        scanf("%s %f", s[i].name, &s[i].score);
    }

    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(s[i].score < s[j].score) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    printf("\nSorted by Score (Descending):\n");
    for(i = 0; i < 5; i++) {
        printf("%s %.2f\n", s[i].name, s[i].score);
    }

    return 0;
}
