#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool npsum(ll arr[], ll n, ll i, ll sum, ll cnt){
	if(i == n){
		if(sum == 0 and cnt > 0)
			return true;
		else
			return false;
	}
	
	return npsum(arr, n, i+1, sum + arr[i], 1) || npsum(arr, n, i+1, sum, cnt);
}


int main()
{
    ll T, n;
	cin >> T;
	
	while(T--){
		cin >> n;
		ll arr[n];
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		
		if(npsum(arr, n, 0, 0, 0))
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
}