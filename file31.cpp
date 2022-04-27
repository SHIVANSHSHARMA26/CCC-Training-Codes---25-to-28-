#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, cost = 0;
    cin>>n;
    int a[n],p[n];
    for(int i = 0; i < n; i++) cin>>a[i]>>p[i];
    for (int i = 0; i < n; i++) {
        cost += p[i] * a[i];
        if(p[i+1] > p[i]) {
            p[i+1] = p[i];
        }
    }
    cout<<cost;
    return 0;
}
