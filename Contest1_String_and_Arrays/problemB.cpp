#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    string st;
    bool soln=true;
    bool seen=false;
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='@'){
            if(i==s.size()-1){soln=false; break;}
            if(i==0){soln=false;break;}
            seen=true;
            st += s[i];
            st += s[i+1];
            st += ',';
            ++i;
        }else st+=s[i];
    }
    if(!seen or !soln){cout<<"No solution"<<endl; return 0;}
    st.erase(st.find_last_of(','),1);

    for(int i=0;i<st.size(); ++i){
        if(st[i]=='@'){
            if(i-1>=0 and (st[i-1]=='@' or st[i-1]==',')) soln=false;
            if(i+1<st.size() and (st[i+1]=='@' or st[i+1]==',')) soln=false;
        }
    }
    if(!soln) cout<<"No solution"<<endl;
    else cout<<st<<endl;

    return 0;
}

//by nandeesh
