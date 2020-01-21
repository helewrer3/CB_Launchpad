#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string input, str;
	getline(cin, input);
	getline(cin, str);
	unordered_map<char, ll> bank;
	for(ll i = 0; i < str.size(); i++)
		bank[str[i]]++;

	ll ans = INT_MAX;
	ll I, J;

	for(ll i = 0; i < input.size(); i++){
		ll j = i;
		ll strI = 0;
		unordered_map<char, ll> visited;
		for(j; j < input.size(); j++){
			if(bank.count(input[j])){
				if(visited[input[j]] < bank[input[j]]){
					visited[input[j]]++;
					strI++;
				}
			}
			if(strI >= str.size()){
				if(ans > j-i+1){
					ans = j-i+1;
					I = i;
					J = j;
				}
			}
		}
	}
	
	if(ans != INT_MAX){
		while(I <= J){
			cout << input[I];
			I++;
		}
		//cout << input[I];
	}
	else{
		cout << "No string";
	}
	