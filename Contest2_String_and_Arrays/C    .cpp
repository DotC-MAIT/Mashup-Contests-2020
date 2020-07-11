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

    ll n,k;
    cin>>n>>k;

    map<ll,ll> m;

    for(int i = 0; i < k; i++)
    {
        ll x;
        cin>>x;
        m[x]++;
    }

    ll l = 1, r = k, ans = 0;

    while(l <= r)
    {
        ll mid = (l+r)/2;
        ll x = 0;

        for(auto& i:m) x += i.second/mid;

        if(x >= n)
        {
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }

    cout<<ans;

	return 0;
}
