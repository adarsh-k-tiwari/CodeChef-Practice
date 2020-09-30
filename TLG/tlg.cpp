#include<bits/stdc++.h>
using namespace std;

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int T;
	cin >> T;
	int lead,winner,c1,c2;
	lead=-999;
	c1=c2=0;
	while (T--)
	{
	    int p1,p2,temp;
	    cin >> p1 >> p2;
	    c1+=p1;
	    c2+=p2;
	    if(c1 > c2)
	    {
	        temp= c1-c2;
	        if(temp > lead)
	        {
	            winner=1;
	            lead=temp;
	        }
	        
	    }
	    else{
	        temp=c2-c1;
	        if(temp > lead)
	        {
	        winner=2;
	        lead=temp;
	        }
	    }
	}
	cout << winner << " " << lead;
		
return 0;
}