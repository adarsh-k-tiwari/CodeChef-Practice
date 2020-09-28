#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	//Code starts here

	unsigned short int test_cases;
	long int A,B;
	cin >> test_cases;

	for(int i=0;i<test_cases;i++)
	{
		cin >> A >> B;
		long int rem=0;
		rem = A % B;
		cout << rem <<endl;
	}
	
	
return 0;
}