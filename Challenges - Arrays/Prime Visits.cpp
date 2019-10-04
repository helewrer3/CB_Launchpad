#include <bits/stdc++.h>

#define ll long long

using namespace std;

void primefind(ll a, ll b, ll sum){
	bool prime[b+1];
	memset(prime, true, sizeof(prime));
	
	for(int i = 2; i*i <= b; i++)
		if(prime[i])
			for(int j = 2*i; j <= b; j += i)
				prime[j] = false;
			
	prime[0] = false;
	prime[1] = false;
	
	for(int p = a; p <= b; p++)
		if(prime[p])
			sum++;
			
	cout << sum;
}

int main(){
	int T;
	cin >> T;
	ll a, b;
	while(T--){
		cin >> a >> b;
		primefind(a, b, 0);
		cout << endl;
	}
}