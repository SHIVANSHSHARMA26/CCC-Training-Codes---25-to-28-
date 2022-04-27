#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void replace(double* pointer, int arr_size)
{
    while(arr_size--) {
        *(pointer + arr_size) = sqrt(*(pointer + arr_size));
    }
}    
int main()
{
  int i;
  double arr[5];
  for (i = 0; i < 5; i++) scanf("%lf", &arr[i]);
  double * p = arr; //can also use double * p = &arr[0];
  replace(p, 5); //changes to p will reflect in array arr
  for (i = 0; i < 5; i++) printf("%.4lf ", arr[i]);
  return 0;
}
