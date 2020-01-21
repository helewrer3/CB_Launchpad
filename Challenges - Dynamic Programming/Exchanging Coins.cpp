#include<bits/stdc++.h>
#define ll long long
using namespace std;
unordered_map<ll, ll> dp;

ll coins(ll n){
	if(!n)
		return 0;

	if(dp.count(n))
		return dp[n];

	dp[n] = max(n, coins(n/2) + coins(n/3) + coins(n/4));

	return dp[n];
}

int main(){
	ll n;
	cin >> n;
	cout << coins(n);
	return 0;
}