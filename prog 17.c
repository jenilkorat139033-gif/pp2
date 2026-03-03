#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    gets(str);

    int i, len=strlen(str);
    int flag=1;

    for(i=0;i<len/2;i++) {
        if(str[i]!=str[len-1-i]) {
            flag=0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
