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
    int arr[t],count_even=0,count_odd=0;
	for(int i=0;i<t;i++)
	{
		cin >> arr[i];
        if(arr[i]%2==0)
            count_even++;
        else
            count_odd++;
	}
    if(count_even > count_odd)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;

	return 0;
}
