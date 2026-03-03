#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    gets(str);

    printf("Length using strlen = %lu\n", strlen(str));

    int count=0;
    while(str[count]!='\0') count++;
    printf("Length without function = %d", count);

    return 0;
}
