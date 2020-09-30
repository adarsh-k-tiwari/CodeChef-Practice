#include<bits/stdc++.h>
using namespace std;


int fact(int n)
{
	if (n>=1)
		return n * fact(n-1);
	else
		return 1;
}

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << fact(n) <<endl;
	}

	return 0;
}
