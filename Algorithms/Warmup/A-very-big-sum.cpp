#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    long sum = 0 ;
    cin >> num;
    for (int i=0;i<num;i++) {
        long a;cin>>a;
        sum+=a;
    }
    cout << sum<<endl;
    return 0;
}
