#include<bits/stdc++.h>
using namespace std;

// (n/2) returns floor(n/2)
// ((n+1)/2) returns ceil(n/2)
//
// equivalently  (a/b) returns floor(a/b)
// ((a+b-1)/b) returns ceil(a/b)


// 1 2 3 4 5 6 7 8 9 10 ..... n-2 n-1 n  starting seq
// 1,3,5,7,9,11,......., 2*(1,2,3,4,5,6,7.....)   GCD=1
// odd number times 1 push ans
// 2*(1,2,3,4,....)  changes to 
// 2*(1,3,5,....    2,4,6,.....)
// and so on
//
// 8*(1,2,3)   (8,16,24)    //special case when 3 nums left
// 8,8,24 

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
