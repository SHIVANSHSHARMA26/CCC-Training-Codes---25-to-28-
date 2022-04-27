#include <stdio.h>

int main()
{
    int var, input_count = 5;
    while(input_count--) {
        scanf("%d",&var);
        printf((var%2 == 1)?"odd\n":"even\n");
    }
    //write your code here
    return 0;
}
