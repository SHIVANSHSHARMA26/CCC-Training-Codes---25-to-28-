#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //your code here
    int space = 0, len;
    char s[100];
    gets(s);
    for(len = 0; s[len] != '\0'; len++);
    for(int i = 0; i < len; i ++) {
        if(s[i] == ' ') space++;
    }
    printf("%d", space + 1);
    return 0;
}
