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

	for(int i=0;i<test_cases;i++)
	{
		int num;
		cin >> num;

		int count=0;
		int rem=0;

		while(num>0)
		{
			rem = num % 10;
			num = num / 10;
			if(rem == 4)
				count++;
		}

		cout << count <<endl; 

	}
return 0;
}