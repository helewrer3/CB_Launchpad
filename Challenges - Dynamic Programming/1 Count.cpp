#include<bits/stdc++.h>
#define ll long long
using namespace std;

void count1(ll arr[], ll N, ll K){
	ll l = 0, r = 0, zero = 0, len = 0;
	ll L, R;

	while(r < N){
		if(arr[r] == 0)
			zero++;
			
		while(zero > K){
			if(arr[l] == 0)
				zero--;
			l++;
		}
		
		if(len < r-l+1){
			len = r-l+1;
			L = l;
			R = r;
			
		}
		r++;
	}

	while(L < R){
		if(arr[L] == 0)
			arr[L] = 1;
		L++;
	}
	
	cout << len << endl;

	for(ll i = 0; i < N; i++)
		cout << arr[i] << " ";
}

int main(){
	ll N, K;
	cin >> N >> K;
	ll arr[N];
	for(ll i = 0; i < N; i++)
		cin >> arr[i];
	
	count1(arr, N, K);
	return 0;
}