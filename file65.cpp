#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a,b;
    cin>>a>>b;
    
    if(a.size() < b.size()) {
        string temp = a;
        a = b;
        b = temp;
    }
    
    while(a.size() != b.size()) {
        b = '0' + b;
    }
    
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == '1') {
            if(b[i] == '1') cout<<'0';
            else cout<<'1';
        }
        else cout<<b[i];
    }
    
    // cout<<a<<endl<<b;
    
    return 0;
}
