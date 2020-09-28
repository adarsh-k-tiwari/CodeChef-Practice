#include<bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	//Code starts here
	int cash_withdraw;
	float amount;
	cin>> cash_withdraw >> amount;
	if(cash_withdraw % 5==0){
		if(cash_withdraw < (amount-0.50)) {
			amount = amount - cash_withdraw - 0.50;
			cout << setprecision (2) << fixed << amount;
		}
		else{
			cout << setprecision (2) << fixed << amount;
		}
	}
	else{
		cout << setprecision (2) << fixed << amount;
	}

	return 0;
}