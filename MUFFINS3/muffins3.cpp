#include<bits/stdc++.h>
using namespace std;

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
		int num;
		cin >> num;

		int ans = (num / 2)+1;
		if(num == 1 || num == 2)
			cout << num << endl;
		else
		{
			cout<< ans << endl;
		}
	}

	return 0;
}