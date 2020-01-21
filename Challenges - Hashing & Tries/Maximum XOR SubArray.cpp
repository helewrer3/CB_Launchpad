#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll N, ans;
	cin >> N;
	ans = INT_MIN;
	ll arr[N];
	for(ll i = 0; i < N; i++)
		cin >> arr[i];
	
	ll xorArr[N+1] = {0};
	for(ll i = 1; i <= N; i++)
		xorArr[i] = arr[i-1]^xorArr[i-1];

	for(ll i = 0; i < N; i++)
		for(ll j = i; j < N; j++)
			ans = max(ans, xorArr[i]^xorArr[j+1]);	
		
	cout << ans;
	return 0;
}