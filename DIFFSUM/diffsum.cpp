#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>> a>>b;
	int sum=0,diff=0;
	if(a<b){
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

