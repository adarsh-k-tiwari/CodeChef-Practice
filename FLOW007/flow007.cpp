#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int test_cases;
	cin >> test_cases;

	while(test_cases--)
	{
		int num;
		cin >> num;
		int ans=0;
		int rem=0;
		while(num)
		{
			rem = num % 10;
			ans=ans*10 + rem;
			num = num /10;
		}
		cout<< ans << endl;

	}
return 0;
}