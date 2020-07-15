#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main() {

    ll n;
    while (cin >> n) {
        if (!n) break;
        cout << ((ceil(sqrt(n)) == floor(sqrt(n))) ? "yes\n" : "no\n" ) ;
    }
    
    return 0;
}

//by shubh
