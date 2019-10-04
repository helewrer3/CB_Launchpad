#include <bits/stdc++.h>

#define ll long long

using namespace std;

void piyush(ll arr[], ll i, ll t, ll p){
	if(i < 0){
		cout << p;
		return;
	}
	
	if(t&1)
		p += arr[i];
	
	piyush(arr, i-1, t+1, p);
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	piyush(arr, n-1, 1, 0);
	
	cin.get();
	cin.get();
    return 0;
}