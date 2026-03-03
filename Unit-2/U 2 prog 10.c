#include <stdio.h>

struct Address {
    char city[50];
    int pin;
};

struct Student {
    char name[50];
    int roll;
    struct Address addr;   // Nested structure
};

int main() {
    struct Student s;

    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    printf("Enter City: ");
    scanf("%s", s.addr.city);
    printf("Enter PIN: ");
    scanf("%d", &s.addr.pin);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("City: %s\n", s.addr.city);
    printf("PIN: %d\n", s.addr.pin);

    return 0;
}
