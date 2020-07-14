#include<bits/stdc++.h>
using namespace std;

bool pal(const string &s){
    for(int i=0; i<s.size()/2; ++i){
        if(s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}

int solve(string &s){
    if(pal(s)) return -1;
    for(int i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]){
            string tmp1 = s.substr(0,i)+s.substr(i+1);
            if(pal(tmp1)) return i;
            string tmp2 = s.substr(0,s.size()-i-1)+s.substr(s.size()-i);
            if(pal(tmp2)) return s.size()-i-1;
            return -1;
        }
    }
    return -1;
}

int main(){
    int t; cin>>t; while(t--){
        string a; cin>>a;
        cout<<solve(a)<<endl;
    }return 0;
}

//by nandeesh
