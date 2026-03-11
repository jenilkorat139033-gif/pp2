#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int len;

    printf("Enter string: ");
    gets(str);

    len = strlen(str);

    printf("Reverse string: ");
    for(int i=len-1;i>=0;i--)
        printf("%c",str[i]);
}
