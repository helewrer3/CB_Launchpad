#include <bits/stdc++.h>

#define ll long long

using namespace std;

void conv(string str, ll n, ll i){
	if(i == n){
		cout << str;
		return;
	}
	
	if(str[i] == 'x'){
		str.erase(str.begin()+i);
		str.push_back('x');
	}
	
	conv(str, n, i+1);
}

int main()
{
	string str;
	cin >> str;
	conv(str, str.size(), 0);
	
	cin.get();
	cin.get();
    return 0;
}