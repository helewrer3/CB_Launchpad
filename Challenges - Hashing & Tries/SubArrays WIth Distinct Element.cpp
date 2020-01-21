#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
int main(){
	ll N;
	cin >> N;
	ll arr[N];
	for(ll i = 0; i < N; i++)
		cin >> arr[i];

	unordered_map<ll, ll> map;
	ll ans, cnt;
	ans = cnt = 0;

	for(ll i = 0; i < N; i++){
		cnt = 0;
		map.clear();
		for(ll j = i; j < N; j++){
			if(map.count(arr[j]))
				break;
			cnt++;
			ans += cnt;
			map[arr[j]] = 1;
		}
	}

	cout << ans;
	return 0;
}