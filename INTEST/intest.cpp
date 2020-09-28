#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	//Code starts here
	
	int n,k;
	long long int num;
	int count=0;

	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		if(num%k == 0)
		{
			count++;
		}
	}
	cout << count;

	return 0;
}