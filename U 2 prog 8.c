#include <stdio.h>
#include <string.h>

struct StudentStruct {
    int id;
    float marks;
    char grade;
};

union StudentUnion {
    int id;
    float marks;
    char grade;
};

int main() {
    struct StudentStruct s;
    union StudentUnion u;

    printf("Size of Structure: %lu\n", sizeof(s));
    printf("Size of Union: %lu\n", sizeof(u));

    s.id = 1;
    s.marks = 85.5;
    s.grade = 'A';

    u.id = 1;
    u.marks = 85.5;
    u.grade = 'A';

    printf("\nStructure values: %d %.2f %c\n", s.id, s.marks, s.grade);
    printf("Union value (last assigned): %c\n", u.grade);

    return 0;
}
