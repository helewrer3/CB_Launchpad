#include <bits/stdc++.h>

#define ll long long

using namespace std;

string map[27] = {"", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};

void conv(string str, string ostr, ll n, ll i){
	if(i >= n){
		cout << ostr << endl;
		return;
	}
	ll n1 = str[i] - '0';
	conv(str, ostr+::map[n1], n, i+1);
	if(i < n-1){
		ll n2 = str[i+1] - '0';
		n2 = n1*10 + n2;
		if(n2 <= 26)
			conv(str, ostr+::map[n2], n, i+2);
	}
}


int main()
{
    string str;
	cin >> str;
	conv(str, "", str.size(), 0);
}