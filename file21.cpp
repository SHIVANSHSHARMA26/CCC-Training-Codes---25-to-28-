#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, flag = 0;
    cin>>n;
    for(int i = 2; i < sqrt(n) + 1; i++) {
        if(n%i == 0) {
            flag = 1;
            break;
        }
    }
    
    if(n == 2) flag == 0;
    if(n<=1) flag=1;
    
    if(flag) cout<<"no";
    else cout<<"yes";
    return 0;
}
