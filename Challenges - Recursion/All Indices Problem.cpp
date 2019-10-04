#include <bits/stdc++.h>

#define ll long long

using namespace std;

void conv(ll arr[], ll n, ll i, ll x){
	if(i == n)
		return;
	
	if(arr[i] == x)
		cout << i << " ";
	
	conv(arr, n, i+1, x);
}

int main()
{
	ll n, x;
	cin >> n;
	ll arr[n];
	
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	
	cin >> x;
	
	conv(arr, n, 0, x);
    return 0;
}