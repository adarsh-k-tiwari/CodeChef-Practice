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
		int sqrt_num = pow(num,0.5);
		cout << sqrt_num << endl;
	}
return 0;
}