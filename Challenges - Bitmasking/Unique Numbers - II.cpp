#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
	
	ll n, xr = 0, n1 = 0, n2 = 0;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
		xr ^= arr[i];
	}

    int sb = xr&1, sbarr;
	
	for(ll i = 0; i < n; i++){
        sbarr = arr[i]&1;
		if(sbarr == sb)
			n1 ^= arr[i];
		else if(sbarr != sb)
			n2 ^= arr[i];
	}
	
	(n1 < n2)? cout << n1 << " " << n2 : cout << n2 << " " << n1;
	
    return 0;
}