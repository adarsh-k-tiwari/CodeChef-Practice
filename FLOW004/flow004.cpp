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
		int n;
		cin >> n;
		
		int num1=n;
        int num2=n%10;
        for(num1=n;num1>=10;num1=num1/10);
        cout<<num1+num2<<endl;		

	}
}