#include<bits/stdc++.h>
#define ll long long
using namespace std;

void span(ll arr[], ll n){
	stack<ll> S;

	for(ll i = 0; i < n; i++){
		while(!S.empty() and arr[i] > arr[S.top()]){
				S.pop();
		}

		(S.empty())? cout << i+1 << " ": cout << i-S.top() << " ";
		S.push(i);
	}
	cout << "END";
}

int main(){
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	span(arr, n);
	return 0;
}