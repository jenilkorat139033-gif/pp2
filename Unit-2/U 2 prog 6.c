#include <stdio.h>

struct Student {
    char name[50];
    float score;
    int joinYear;
};

void print2019(struct Student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(s[i].joinYear == 2019) {
            printf("Name: %s, Score: %.2f\n",
                   s[i].name, s[i].score);
        }
    }
}

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter Name, Score, Join Year: ");
        scanf("%s %f %d",
              s[i].name, &s[i].score, &s[i].joinYear);
    }

    printf("\nStudents who joined in 2019:\n");
    print2019(s, 5);

    return 0;
}
