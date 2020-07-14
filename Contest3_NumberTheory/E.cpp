#include<bits/stdc++.h>
using namespace std;

// (n/2) returns floor(n/2)
// ((n+1)/2) returns ceil(n/2)
//
// equivalently  (a/b) returns floor(a/b)
// ((a+b-1)/b) returns ceil(a/b)

int main(){
    int n; cin>>n;
    int mul = 1;
    while(n>3){
        for(int i=0; i<(n+1)/2; ++i)
            cout<<mul<<' ';
        mul*=2;
        n/=2;
    }
    if(n==1) cout<<mul<<endl;
    else if(n==2) cout<<mul<<' '<<n*mul<<endl;
    else if(n==3) cout<<mul<<' '<<mul<<' '<<n*mul<<endl;
    return 0;
}

//by nandeesh
