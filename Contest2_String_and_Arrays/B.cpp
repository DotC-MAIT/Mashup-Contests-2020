#include<bits/stdc++.h>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n; cin >> n;
	vector<int> index(n + 1);

	for (int i = 1; i <= n; i++)
	{
		int a; cin >> a;
		index[a] = i;  //index store
	}

	int m;
	cin >> m;
	long long int sum1 = 0;
	long long int sum2 = 0;
	for (int i = 0; i < m; i++)
	{
		int a; cin >> a;
		int first = index[a];
		int second = n - index[a] + 1;
		sum1 += first;
		sum2 += second;
	}
	cout << sum1 << " " << sum2 << endl;

	return 0;




}