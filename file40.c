#include<stdio.h>
int strlen(char* s)
{
    int i = 1;
    for(; s[i - 1] != '\0'; i++);
    return i - 1;
}
int main()
{
    char str[50];
    gets(str);
    printf("%d", strlen(str));
    return 0;
}
