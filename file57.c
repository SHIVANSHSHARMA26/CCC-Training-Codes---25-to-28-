#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
	printf("%c",tolower(ch));
        }
    else if(ch >= 'a' && ch <= 'z') {
        printf("%c",toupper(ch));}

	return 0;
}
