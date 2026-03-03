#include <stdio.h>

struct Student {
    char name[50];
    float score;
    float grade;
    int joinYear;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Score: ");
        scanf("%f", &s[i].score);
        printf("Grade: ");
        scanf("%f", &s[i].grade);
        printf("Join Year: ");
        scanf("%d", &s[i].joinYear);
    }

    printf("\nStudent Records:\n");
    for(i = 0; i < 5; i++) {
        printf("%s %.2f %.2f %d\n",
               s[i].name, s[i].score,
               s[i].grade, s[i].joinYear);
    }

    return 0;
}
