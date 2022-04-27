#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,N;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&N);
        for(int i=1;i<=N;i++){
            if(N%i==0){
                printf("%d ",i);
            }
            
        }
        printf("\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
