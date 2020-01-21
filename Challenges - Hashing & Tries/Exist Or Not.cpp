#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ll T;
	cin >> T;
	while(T--){
		unordered_map<ll, ll> map;
		ll N;
		cin >> N;
		ll d;
		while(N--){
			cin >> d;
			map[d] = 1;
		}
		ll Q;
		cin >> Q;
		while(Q--){
			cin >> d;
			if(map.count(d))
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
	}
	return 0;
}