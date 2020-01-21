#include<bits/stdc++.h>
#define ll long long
using namespace std;

unordered_map<ll, ll> bank;
bool cmp(ll a, ll b){
	return bank[a] < bank[b];
}

int main(){
	ll N, data;
	cin >> N;
	vector<ll> arr;
	
	for(ll i = 0; i < N; i++){
		cin >> data;

		if(!bank.count(data))
			arr.push_back(data);
		
		bank[data] = i;
	}

	sort(arr.begin(), arr.end(), cmp);

	for(ll i = 0; i < arr.size(); i++)
		cout << arr[i] << endl;


	return 0;
}