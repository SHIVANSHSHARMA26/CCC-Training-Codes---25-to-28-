#include <stdio.h>

int main() {
    int N,i;
    scanf("%d",&N);
    for(i=N; i<=N*10; i+=N){
        printf("%d ",i);
    }
    return 0;
}
