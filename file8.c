#include <stdio.h>

int main()
{
    int number, is_prime,i;
    scanf("%d", &number);
    for(i=2; i<=(number/2); i++){
        if(number % i != 0){
            is_prime = 1;
            break;
        }
        else{
            is_prime = 0;
            break;
        }
    }


    
    if (is_prime == 1) printf("yes");
    if (is_prime == 0) printf("no");
    return 0;
}
