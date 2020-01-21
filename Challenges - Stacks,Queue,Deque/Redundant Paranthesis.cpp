#include <bits/stdc++.h>
using namespace std;

bool redundant(string str){
	stack<char> S;
	int cnt;
	for(int i = 0; i < str.size(); i++){
		cnt = 0;
		if(str[i] == ')'){
			while(S.top() != '('){
				S.pop();
				cnt++;
			}
			S.pop();
			if(cnt == 0)
				return true;
		}
		else
			S.push(str[i]);
	}

	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string str;
		cin >> str;
		if(redundant(str))
			cout << "Duplicate";
		else
			cout << "Not Duplicates";
		cout << endl;
	}
	