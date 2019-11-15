#include<bits/stdc++.h>
using namespace std;

bool isValid(string str){
	stack<char> S;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '(' or str[i] == '{' or str[i] == '['){
			S.push(str[i]);
		}
		else{
			if(str[i] == ')' and S.top() == '(')
				S.pop();
			else if(str[i] == ']' and S.top() == '[')
				S.pop();
			else if(str[i] == '}' and S.top() == '{')
				S.pop();
			else
				return false;
		}
	}

	if(S.empty())
		return true;
	return false;
}

int main() {
	string str;
	cin >> str;
	bool isYes = isValid(str);
	if(isYes)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}