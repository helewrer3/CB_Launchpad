#include <bits/stdc++.h>

#define ll long long

using namespace std;

void conv(string str, ll n, ll i){
	if(i == n)
		return;
	
	cout << str[i];
	
	if(str[i] == str[i+1])
		cout << "*";
	
	conv(str, n, i+1);
}

int main()
{
	string str;
	cin >> str;
	
	conv(str, str.size(), 0);
    return 0;
}