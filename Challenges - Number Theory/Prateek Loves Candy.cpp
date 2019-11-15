#include<bits/stdc++.h>
#define ll long long
#define size 1000000
using namespace std;

ll brr[1000000+1];

void findPrime(ll arr[]){
	arr[2] = 1;
	for(ll i = 3; i <= size; i += 2)
		arr[i] = 1;
	for(ll i = 3; i <= sqrt(size); i+=2)
		for(ll j = i*i; j < size; j += i)
			arr[j] = 0;
	
	ll j = 1;
	for(ll i = 2; i <= size; i++){
		if(arr[i]&1){
			brr[j] = i;
			j++;
		}
	}
}

int main() {
	ll arr[1000000+1];
	findPrime(arr);
	ll T, n;
	cin >> T;
	while(T--){
		cin >> n;
		cout << brr[n] << endl;
	}
	return 0;
}