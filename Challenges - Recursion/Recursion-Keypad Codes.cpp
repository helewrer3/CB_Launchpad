#include <bits/stdc++.h>

#define ll long long

using namespace std;

string map[10] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wx", "yz"};

ll sum = 0;

void keypad(string str, string osf, ll n, ll i){
	if(i >= n){
		cout << osf << " ";
		::sum++;
		return;
	}
	
	char ch = str[i];
	string code = ::map[ch - '0'];
	
	for(ll j = 0; j < code.size(); j++)
		keypad(str, osf + code[j], n, i+1);
}

int main()
{
	string str;
	cin >> str;
	
	keypad(str, "", str.size(), 0);
	cout << endl;
	cout << sum;
    return 0;
}