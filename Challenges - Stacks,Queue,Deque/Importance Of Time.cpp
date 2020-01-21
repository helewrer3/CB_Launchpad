#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int call[n];
	int ideal[n];
	queue<int> Q;
	for(int i = 0; i < n; i++){
		cin >> call[i];
		Q.push(call[i]);
	}
	for(int i = 0; i < n; i++)
		cin >> ideal[i];
	
	int time = 0;

	for(int i = 0; i < n; i++){
		while(Q.front() != ideal[i]){
			Q.push(Q.front());
			Q.pop();
			time++;
		}

		time++;
		Q.pop();
	}

	cout << time;
	return