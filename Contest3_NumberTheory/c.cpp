
/*
This problem has two possible solutions:

1) Let's handle all possible triples and check every of them for being a counterexample. This solution works with asymptotics O(n 3 logA)

2) Handle only a few cases. It could be done like this:

  if (l % 2 != 0)
      l++;
   
  if (l + 2 > r)
    out.println(-1);
  else
    out.println(l + " " + (l + 1) + " " + (l + 2));
    */
#include <iostream>
 
 
using namespace std;
 
int main() {
	long long l, r;
	cin >> l >> r;
 
	if (r - l + 1 < 3) {
	 	cout << -1 << endl;
	 	return 0;
	}
 
	if (l % 2 == 0) {
	 	cout << l << ' ' << l + 1 << ' ' << l + 2 << endl;
	 	return 0;
	}
 
	if (r - l + 1 > 3){
	 	cout << l + 1 << ' ' << l + 2 << ' ' << l + 3 << endl;
	 	return 0;
	}
 
	cout << -1 << endl;
}	