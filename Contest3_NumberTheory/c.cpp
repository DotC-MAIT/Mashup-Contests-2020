/*
A number m is beautiful if and only if all numbers in range [1,m] occupies m consecutive positions in the given sequence p. This is equivalent to posmax−posmin+1=m where posmax,posmin are the largest, smallest position of 1,2,…,m in sequence p respectively.

We will consider m in increasing order, that its m=1,2,…,n. For each m we will find a way to update posmax,posmin so we can tell either m is a beautiful number or not in constant time. Denote posi is the position of number i in the sequence p. When m=1, we have posmax=posmin=pos1. When m>1, the value of posmax,posmin can be updated by the following formula:

new_posmax=max(old_posmax,posm)
new_posmin=min(old_posmin,posm)
So we can update them in constant time. The correctness of above formula is based on the definition of posmax,posmin.
Total time comlexity: O(n)
*/
#include <bits/stdc++.h>

using namespace std;

const int M = 2e5 + 239;

int n, p[M], x;

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        p[x - 1] = i;
    }
    int l = n;
    int r = 0;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        l = min(l, p[i]);
        r = max(r, p[i]);
        if (r - l == i)
            ans += '1';
        else
            ans += '0';
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}