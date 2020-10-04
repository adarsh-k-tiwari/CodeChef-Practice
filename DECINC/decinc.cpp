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
	if(t%4==0)
	{
		t = t+1;
		cout<<t<<endl;
	}
	else
	{
		t = t-1;
		cout<<t<<endl;
	}

	return 0;
}
