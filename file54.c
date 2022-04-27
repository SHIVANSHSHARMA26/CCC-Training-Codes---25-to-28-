#include<stdio.h>
void power(int*, int);
int main()
{
    int res, val;
    scanf("%d", &val);
    power(&res, val);
    printf("%d", res);
    return 0;
}
void power(int* a, int b)
{
    (*a)=1;
    for(int i=1;i<=b;i++)
        (*a) *=2;
    return (*a);
}
//implement the power function here
