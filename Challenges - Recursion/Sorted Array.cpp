#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool sor(ll arr[], ll n, ll i){
	if(i == n-1)
		return true;
	
	if(arr[i] > arr[i+1])
		return false;
	
	sor(arr, n, i+1);
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	
	if(sor(arr, n, 0))
		cout << "true";
	else
		cout << "false";
    return 0;
}