#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif;
	
	int a,b;
	cin>> a>>b;
	int sum=0,diff=0;
	if(a<=b){
		sum = a+b;
		cout<<sum<<endl;
	}
	else
	{
		diff = a-b;
		cout<<diff<<endl;
	}
	return 0;
}

