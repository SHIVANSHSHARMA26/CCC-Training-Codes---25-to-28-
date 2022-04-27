#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int num,n,i;
    n=0;
    scanf("%d",&num);
    for(i=2;i<=num+1;i++){
        if(num%i==0){
            n+=1;
        }
      
    }
    printf("%d",n); 
    
    return 0;
}
