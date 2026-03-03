#include <stdio.h>
int main() {
    char str[100];
    gets(str);

    int space=0, vowel=0;

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ') space++;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
           vowel++;
    }

    printf("Spaces=%d\nVowels=%d",space,vowel);

    return 0;
}
