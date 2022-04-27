#include<stdio.h>
int strcmp(char* s1, char* s2)
{
    while(*s1)
    {
        if(*s1 != *s2)
            return *s1 - *s2;
        s1++;
        s2++;
    }
    return *s1-*s2;
}
int main()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    printf("%d", strcmp(str1, str2));    
    return 0;
}
