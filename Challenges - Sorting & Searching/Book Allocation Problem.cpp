#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isValid(ll arr[], ll k, ll n, ll ans){
	
	ll s = 0, tk = 1;
	
	for(ll i = 0; i < n; i++){
		if(s + arr[i] <= ans)
			s += arr[i];
		else{
			s = arr[i];
			tk++;
			if(tk > k)
				return false;
		}
	}
	
	return true;
}

ll maxpage(ll arr[], ll n, ll k){
	
	ll tpages = 0, st = arr[n-1], mid, ed, ans;
	
	for(ll i = 0; i < n; i++)
		tpages += arr[i];
	ed = tpages;
	ans = st;
	
	while(st <= ed){
		mid = (st+ed)/2;
		
		if(isValid(arr, k, n, mid)){
			ans = mid;
			ed = mid - 1;
		}
		else{
			st = mid + 1;
		}
	}
	return ans;
}


int main()
{
	ll T, n, k;
	cin >> T;
	
	while(T--){
		cin >> n >> k;
		ll arr[n];
		for(ll i = 0; i < n; i++)
			cin >> arr[i];
		cout << maxpage(arr, n, k) << endl;
	}
}