#include <bits/stdc++.h>

#define ll long long
ll MOD = pow(10, 9) + 7;

using namespace std;

int count = 0;

void subseq(string input, string output){
	
	if(!input.size()){
		cout << output << " ";
		::count++;
		return;
	}
	
	char ch = input[0];
	string ros = input.substr(1);
	
	subseq(ros, output);
	subseq(ros, output + ch);
}


int main()
{
	string str;
	cin >> str;
	
	subseq(str, "");
	cout << endl << ::count;
}