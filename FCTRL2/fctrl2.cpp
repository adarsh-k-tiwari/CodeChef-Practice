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
	cin >> test_cases;

	for(int i=0;i<test_cases;i++)
	{
		long int num;
		long int fact=1;
		cin >> num;		

		for(int j=1;j<=num;j++)
		{
			fact = fact * j;
		}
		
		cout << fact << endl;
	}
	
return 0;
}

