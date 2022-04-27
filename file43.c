#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int palindrome(char* str)
{
    int i=0,j=0,f=0;
    while(str[j]!='\0') j++;
    j--;
    while(i<j-1)
    {
        if(str[i]==str[j]) {f++; break;}
        i++;
        j--;
    }
    return f;
}    
int main()
{
  char str[50];
  gets(str);
  printf("%d", palindrome(str));
  return 0;
}
