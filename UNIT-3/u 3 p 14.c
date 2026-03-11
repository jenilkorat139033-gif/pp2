#include <stdio.h>
#include <string.h>

int main(){
    char s1[100], s2[100];

    printf("Enter first string: ");
    gets(s1);

    printf("Enter second string: ");
    gets(s2);

    if(strcmp(s1,s2)==0)
        printf("Strings are same");
    else
        printf("Strings are different");
}
