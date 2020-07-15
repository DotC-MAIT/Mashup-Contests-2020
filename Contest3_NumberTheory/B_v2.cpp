//This is another implementation for problem B, without using 
//inbuilt sqrt function

#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli mysqrt_floor(lli n){
    //binary search for sqrt
    lli l=1, r=n/2;
    while(r-l>4){
        lli mid = (l+r)/2;
        if(mid*mid > n) r=mid;
        else l=mid;
    }
    lli ans=l;
    for(lli i=l+1;i<=r;++i)
        if(i*i<=n) ans=i;
    return ans;
}

int main(){
    lli n; cin>>n;
    while(n){
        lli sq = mysqrt_floor(n);
        if(sq*sq == n) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        cin>>n;
    }
    return 0;
}

//by nandeesh
