#include<bits/stdc++.h>
using namespace std;

bool present[102];
int main(){
    int x,n; cin>>x>>n;
    for(int i=0; i<n; ++i){
        int tmp; cin>>tmp;
        present[tmp]=1;
    }
    int minv = -1;
    int diff = abs(x-minv);
    for(int i=0; i<102; ++i){
        if(!present[i] and abs(i-x)<diff){
            minv = i;
            diff = abs(i-x);
        }
    }
    cout<<minv<<endl;
    return 0;
}
