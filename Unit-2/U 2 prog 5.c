#include <stdio.h>

struct Student {
    char name[50];
    float grade;
};

void printAboveFive(struct Student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        if(s[i].grade > 5.0) {
            printf("%s\n", s[i].name);
        }
    }
}

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Enter Name and Grade: ");
        scanf("%s %f", s[i].name, &s[i].grade);
    }

    printf("\nStudents with grade > 5.0:\n");
    printAboveFive(s, 5);

    return 0;
}
