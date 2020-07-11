#include <bits/stdc++.h>


using namespace std;


void solve()
{

	int n; cin >> n;
	string s; cin >> s;

	n--;
	int cnt = 0;

	vector<string>arr;
	string temp = "";
	temp += s[0];
	int i;
	vector<int>count(26, 0);
	count[s[0] - 'a'] = 1;

	for ( i = 1; i < s.size(); i++)
	{
		if (cnt == n)
			break;
		if (s[i] != s[i - 1])
		{
			if (count[s[i] - 'a'] == 1)
			{
				temp += s[i];
				continue;
			}

			cnt++;
			arr.push_back(temp);
			temp.clear();

			temp += s[i];
			count[s[i] - 'a'] = 1;



		}
		else
			temp += s[i];


	}

	if (cnt < n)
	{
		cout << "NO" << endl;
		return ;

	}

	for (int j = i; j < s.size(); j++)
		temp += s[j];

	cout << "YES" << endl;

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << endl;

	cout << temp;












}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	solve();

	return 0;
}

