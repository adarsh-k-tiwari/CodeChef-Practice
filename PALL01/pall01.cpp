#include<bits/stdc++.h>
using namespace std;


int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin >> t;
	while(t--)
	{
		int num,rem=0,sum=0;
		int temp;
		cin >> num;
		temp=num;    
		while(num>0)    
		{    
			rem=num%10;    
			sum=(sum*10)+rem;    
			num=num/10;    
		}    
		if(temp==sum)    
			cout << "wins" <<endl;
		else    
			cout << "loses" <<endl;

	}

	return 0;
}
