#include<bits/stdc++.h>
using namespace std;


int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	unsigned int n,arr[]={100,50,10,5,2,1};
	cin >> t;
	while(t--)
	{
		int count=0;
		scanf("%d",&n);
		for(int i=0;i<6;i++)
		{
			count=count+n/arr[i];
			n=n%arr[i];
			if(n==0)
			 break;
		}
		
		cout<<count<<"\n";
 	}

return 0;
}
