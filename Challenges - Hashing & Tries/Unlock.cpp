#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b){
	return a > b;
}

int main(){
	ll N, K;
	cin >> N >> K;
	ll arr[N];
	for(ll i = 0; i < N; i++)
		cin >> arr[i];
	
	if(K > N){
		sort(arr, arr+N, cmp);
		for(ll i = 0; i < N; i++){
			cout << arr[i] << " ";
		}
	}
	else{
		ll ans[N];
		for(ll i = 0; i < N; i++)
			ans[i] = arr[i];

		sort(arr, arr+N, cmp);

		for(ll i = 0; i < N; i++){
			if(K){
				if(arr[i] > ans[i]){
					for(ll j = 0; j < N; j++)
						if(ans[j] == arr[i])
							swap(ans[j], ans[i]);
					K--;
				}
			}
		}
		for(ll i = 0; i < N; i++){
			cout << ans[i] << " ";
		}
	}
	return 0;
}