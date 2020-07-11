#include<bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
#define ll long long
//#define bint int1024_t
#define ld long double
#define vect vector<ll>
#define unmap unordered_map
#define pb push_back
#define F first
#define pll pair<ll,ll>
#define S second
#define pi 3.1415926536
#define mod int(1e9+7)
#define mp make_pair
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#define testcases ll t; cin>>t; while(t--)

using namespace std;
//using namespace boost::multiprecision;
//using namespace __gnu_pbds;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    map<ll,ll> level;

    while(n--)
    {
        string s;
        cin>>s;
        ll score = 0, neg = 0;

        for(auto& i:s)
        {
            if(i == '(') score++;
            else if(score) score--;
            else neg++;
        }

        if(score&&neg) continue;
        level[score-neg]++;
    }

    ll ans = 0;

    for(auto& i:level)
    {
        if(i.F != -i.F)
            ans += i.S*(level[-i.F]);
        else
            ans += 2*i.S*(level[-i.F]);
    }

    cout<<ans/2;
    return 0;
}
