#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll power(ll a, ll b, ll c){
	ll res = 1;
	a = a%c;

	while(b > 0){

		if(b&1)
			res = (res*a)%c;

		b >>= 1;
		a = (a*a)%c;
	}

	return res;
}

int main(){
	unsigned ll a, b, c;
	cin >> a >> b >> c;
	cout << power(a, b, c);
	return 0;
}