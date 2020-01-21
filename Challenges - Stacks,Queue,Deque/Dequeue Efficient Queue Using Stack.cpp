#include<bits/stdc++.h>
using namespace std;
stack<int> frnt;
stack<int> rer;

void pp_back(){
	while(!frnt.empty()){
		rer.push(frnt.top());
		frnt.pop();
	}
	cout << rer.top() << " ";
	rer.pop();
	while(!rer.empty()){
		frnt.push(rer.top());
		rer.pop();
	}
}

void pp_front(){
	frnt.pop();
}

int main(){
	int N;
	cin >> N;
	for(int i = 0; i < N; i++)
		frnt.push(i);

	while(N--)
		pp_back();
	return 0;
}