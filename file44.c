#include <stdio.h> 
int main() 
{ int n;
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 int year;
scanf("%d", &year); 
 if ((year%4 == 0)) 
 printf("yes\n"); 
 else 
 printf("no\n"); 
     }
 return 0; 
}
