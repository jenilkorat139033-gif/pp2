#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    gets(str);

    printf("Reverse using strrev = %s\n", strrev(str));

    int len=strlen(str);
    printf("Reverse without function:\n");
    for(int i=len-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}
