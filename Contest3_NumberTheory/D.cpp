#include<bits/stdc++.h>
using namespace std;

vector<int> posn(200001);
int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
        for(int i=1; i<=n; ++i){
            int tmp; cin>>tmp;
            posn[tmp]=i;
        }
        int l = posn[1], r = posn[1];
        for(int m=1; m<=n; ++m){ //for every length
            if(r-l+1 == m) cout<<1;
            else cout<<0;
            l = min(l, posn[m+1]);
            r = max(r, posn[m+1]);
        }
        cout<<'\n';
    }
    return 0;
}

//by nandeesh
