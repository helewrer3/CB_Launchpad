#include <bits/stdc++.h>

#define ll long long

using namespace std;

int fin(ll arr[], ll x, ll i){
	if(i < 0)
		return -1;
	
	if(arr[i] == x)
		return i;
	
	fin(arr, x, i-1);
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	ll x;
	cin >> x;
	ll index = fin(arr, x, n-1);
	cout << index;
    return 0;
}
