#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll K, N;
	cin >> K >> N;
	set<ll> arr;
	while(K--){
		ll n = N;
		while(n--){
			ll d;
			cin >> d;
			arr.insert(d);
		}
	}

	for(auto it:arr)
		cout << it << " ";
	return 0;
}