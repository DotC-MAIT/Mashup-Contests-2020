#include<bits/stdc++.h>
using namespace std;

bool pal(const string &s){
    for(int i=0; i<s.size()/2; ++i){
        if(s[i] != s[s.size()-i-1])
            return false;
    }
    return true;
}

int main(){
    string s; cin>>s;
    if(!pal(s)){
        cout<<s.size()<<endl; return 0;
    }
    char c = s.front();
    char allsame = true;
    for(int i=1; i<s.size(); i++)
    {
        if(c!=s[i]){allsame=false; break;}
    }
    if(allsame) cout<<0<<endl;
    else cout<<s.size()-1<<endl;
    return 0;
}
