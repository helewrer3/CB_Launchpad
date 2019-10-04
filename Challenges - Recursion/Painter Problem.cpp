#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool isValid(ll arr[], ll K, ll mid, ll N){
	ll sum = 0, Painter = 1;
	for(ll i = 0; i < N; i++){
		if(sum + arr[i] <= mid){
			sum += arr[i];
		}
		else{
			sum = arr[i];
			Painter++;
			if(Painter > K)
				return false;
		}
	}
	
	return true;
}

int main()
{
	ll N, K, T, st = 0, ed = 0, mid, ans;
	cin >> K >> N >> T;
	ll arr[N];
	for(ll i = 0; i < N; i++){
		cin >> arr[i];
		ed += arr[i];
		st = max(st, arr[i]);
	}
	
	
	while(st <= ed){
		mid = (st+ed)/2;
		
		if(isValid(arr, K, mid, N)){
			ans = mid;
			ed = mid - 1;
		}
		else
			st = mid + 1;
	}
	
	cout << ans*T%10000003;
    return 0;
}