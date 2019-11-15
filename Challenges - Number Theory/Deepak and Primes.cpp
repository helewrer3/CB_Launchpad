#include<bits/stdc++.h>
#define ll long long
#define size 100000001
using namespace std;

bool prime[size] = {0};
ll nthprime[size] = {0};

void sieve(){
	prime[2] = true;
	for(ll i = 3; i < size; i+=2)
		prime[i] = 1;

	for(ll i = 3; i*i < size; i+=2)
		for(int j = i*i; j < size; j += 2*i)
			prime[j] = false;

	ll pt = 1;
	for(ll i = 2; i < size; i++)
		if(prime[i]){
			nthprime[pt] = i; 
			pt++;
		}
}

int main(){
	ll n;
	cin >> n;
	sieve();
	cout << nthprime[n];
	return 0;
}