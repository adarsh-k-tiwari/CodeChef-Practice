#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	//Code starts here

	int test_cases;
	long long int num;
	
	cin >> test_cases;

	for(int i=0;i<test_cases;i++)
	{
		int sum=0, rem=0;
		cin >> num;

		while(num >= 1)
		{
			rem = num % 10;
			sum += rem;
			num = num / 10;
		}
		cout << sum <<endl; 
	}
	
	
return 0;
}