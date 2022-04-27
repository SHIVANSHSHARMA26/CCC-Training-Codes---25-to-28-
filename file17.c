#include <stdio.h>

int main()
{
    int marks;
    scanf("%d", &marks);
    if(marks >= 76 && marks <=100){
        printf("A");}
    else if(marks >= 51 && marks <= 75){
        printf("B");}
    else if(marks >= 26 && marks <= 50){
        printf("C");}
    else{
        printf("D");}
    return 0;
}
