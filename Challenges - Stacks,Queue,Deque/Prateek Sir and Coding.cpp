#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> module;
	int n;
	cin >> n;
	int type, cost;
	while(n--){
		cin >> type;
		if(type == 1){
			if(module.empty())
				cout << "No Code" << endl;
			else{
				cout << module.top() << endl;
				module.pop();
			}
		}
		else{
			cin >> cost;
			module.push(cost);
		}
	}
	return 0;
}