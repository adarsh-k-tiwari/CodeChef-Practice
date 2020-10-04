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
		int n,a[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
        int count=0;
        cin>>n;
        for(int i=11;i>=0;i--)
        {
            if(n>=a[i])
            {
                n=n-a[i];
                count++;
                i++;
            }
        }
        cout<<count<<endl;
	}

	return 0;
}
