#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        for(int j=0;j<(a-(i+1));j++){
            cout<<" ";
        }
        for(int j=0;j<(i+1);j++){
            cout<<"#";
        }
        cout<<endl;
    }
    return 0;
}
