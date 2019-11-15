#include<bits/stdc++.h>
using namespace std;
stack<int> S;

int insert(int x){
	if(S.empty())
		S.push(x);
	else{
		int y = S.top();
		S.pop();
		insert(x);
		S.push(y);
	}
}

void revStack(){
	if(S.empty())
		return;
	int x = S.top();
	S.pop();
	revStack();
	insert(x);
}

void printStk(){
	if(S.empty())
		return;

	cout << S.top() << endl;
	S.pop();
	printStk();
}

int main(){
	int n, d;
	cin >> n;
	while(n--){
		cin >> d;
		S.push(d);
	}
	revStack();
	printStk();
	return 0;
}