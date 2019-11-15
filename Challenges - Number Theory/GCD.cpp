#include <iostream>
#define ll long long
using namespace std;

int gcd(ll a, ll b){
	if(b==0){
		return a;
	}

	return gcd(b, a%b);
}

int main(){

	ll n1, n2;
	cin >> n1 >> n2;

	cout << gcd(n1, n2);

	return 0;
}