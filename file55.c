#include<stdio.h>
void swap(int*, int*);
int main()
{
    int v1, v2;
    scanf("%d%d", &v1, &v2);
    swap(&v1, &v2);
    printf("%d %d", v1, v2);
    return 0;
}
void swap(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
//implement the function swap here
