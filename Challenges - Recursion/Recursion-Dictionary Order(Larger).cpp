#include <bits/stdc++.h>

#define ll long long

using namespace std;

void dict(string input, string comp, string output){
	if(!input.size()){
		if(output > comp){
			cout << output << endl;
		}
		return;
	}
	
	char ch;
	string ros;
	
	for(ll i = 0; i < input.size(); i++){
		ch = input[i];
		ros = input.substr(0, i) + input.substr(i+1, input.size());
		dict(ros, comp, output + ch);
	}
}

int main()
{
	
	string str;
	cin >> str;
	dict(str, str, "");
    return 0;
}