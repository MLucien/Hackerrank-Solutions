#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    vector<int> h,j,k,l;
    for(int i=0;i<t;i++){
        int a;cin>>a;
        h.push_back (a);
    }
    for (int z=0;z<h.size();z++){
        if (h[z]>0){
            j.push_back (h[z]);
        }
        else if (h[z]<0){
            k.push_back(h[z]);
        }
        else{
            l.push_back(h[z]);
        }
    }
    float hsize = float (h.size());
    float jsize = float (j.size());
    float ksize = float (k.size());
    float lsize = float (l.size());
    cout<<jsize/hsize<<endl;
    cout<<ksize/hsize<<endl;
    cout<<lsize/hsize<<endl;
    return 0;
}
