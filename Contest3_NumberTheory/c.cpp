////////////////////////////////editorial////////////////////

/*
Let's see, what's the solution for some k = n - 1:

1 10 2 9 3 8 4 7 5 6

At the odd indexes we placed increasing sequence 1, 2, 3 .., at the even — decreasing sequence n, n - 1, n - 2, ... First, we must get the permutation the way described above, then get first k numbers from it, and then we should make all other distances be equal to 1.

This solution works with O(n).
*/
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
#define maxn 100020

int ans[maxn],l,r,t,n,k,f;

int main()
{
	scanf("%d%d",&n,&k);
	l=n-k,r=n;
	for (int i=1;i<n-k;i++)
	    ans[i]=i;
	f=1;
	for (int i=n-k;i<=n;i++)
	{
	    if (f) ans[i]=l++; else ans[i]=r--;
	    f=1-f;
	}
	for (int i=1;i<n;i++) printf("%d ",ans[i]);
	printf("%d\n",ans[n]);
}
