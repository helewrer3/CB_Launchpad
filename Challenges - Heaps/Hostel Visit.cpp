#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ll Q, K;
	cin >> Q >> K;
	priority_queue<ll> PQ;
	while(Q--){
		ll T;
		cin >> T;
		if(T == 1){
			ll x, y;
			cin >> x >> y;
			ll dist = x*x+y*y;
			PQ.push(dist);
            if(PQ.size() > K){
                PQ.pop();
            }
		}
		else if(T == 2){
			cout << PQ.top() << endl;
		}
	}
	return 0;
}