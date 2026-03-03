#include <stdio.h>
#include <string.h>
int main() {
    char s1[50], s2[50];
    gets(s1);
    gets(s2);

    if(strcmp(s1,s2)==0)
        printf("Strings are same");
    else
        printf("Strings are different");

    return 0;
}
