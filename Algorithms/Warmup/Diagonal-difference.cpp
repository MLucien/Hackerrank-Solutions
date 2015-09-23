#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector <int> foo;
    for(int i=0;i<t;i++){
        for(int r=0;r<t;r++) {
           int a;cin>>a; 
           foo.push_back(a);
        }
    }
    int final1, final2 =0;
    for(int s=0;s<t;s++){
        final1 += foo[s*(t+1)];
        final2 += foo[(s+1)*(t-1)];
        cout<<"";
    }
    cout<<abs(final1-final2)<<endl;
    return 0;
}
