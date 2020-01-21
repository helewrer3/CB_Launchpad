#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int , int> map;
	int n, val, ans = INT_MAX, ans_it = INT_MIN;
	cin >> n;
	while(n--){
		cin >> val;
		map[val]++;
	}

	for(auto it:map){
		if(it.second >= ans_it){
			if(it.second == ans_it)
				ans = min(ans, it.first);
			else
				ans = it.first;
			ans_it = it.second;
		}
	}

	cout << ans;
	return 0;
}