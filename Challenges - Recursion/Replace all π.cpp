#include <bits/stdc++.h>

#define ll long long

using namespace std;

void conv(string str, ll n, ll i){
	if(i == n)
		return;
	
	if(str[i] == 'p' and str[i+1] == 'i')
		cout << 3.14;
	else if(str[i] == 'i' and str[i-1] == 'p'){}
	else
		cout << str[i];
	
	conv(str, n, i+1);
}

int main()
{
	ll T;
	cin >> T;
	string str;
	while(T--){
		cin >> str;
		conv(str, str.size(), 0);
		cout << endl;
	}
    return 0;
}
