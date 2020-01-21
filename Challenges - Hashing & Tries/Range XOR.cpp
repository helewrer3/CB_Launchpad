#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll Q;
	cin >> Q;
	vector<ll> V;
	while(Q--){
		ll T;
		cin >> T;
		if(T == 0){
			ll d;
			cin >> d;
			V.push_back(d);
		}
		else{
			ll x, l, r;
			cin >> l >> r >> x;
			ll ans = INT_MIN;
			ll res;
			for(auto i = l-1; i <= r-1; i++){
				if(ans < (x^V[i]))
					res = V[i];
				ans = max(ans, x^V[i]);
			}
			cout << res << endl;
		}
	}
	return 0;
}