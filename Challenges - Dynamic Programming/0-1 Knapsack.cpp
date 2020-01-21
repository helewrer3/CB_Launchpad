#include<bits/stdc++.h>
using namespace std;

bool compare(pair<float, float> p1, pair<float, float> p2){
	return p1.second > p2.second;
}

int main(){
	float s;
	int n;
	cin >> n >> s;
	float x;
	int ans = 0;
	pair<float, float> p[n]; //Size, Value
	for(int i = 0; i < n; i++){
		cin >> p[i].first;
	}
	for(int i = 0; i < n; i++){
		cin >> x;
		p[i].second = x/p[i].first;
	}
	sort(p, p+n, compare);
	int i = 0;
	while(s > 0){
		if(p[i].first <= s)
			ans += p[i].second*p[i].first;
		s -= p[i].first;
		i++;
	}
	cout << ans;
	return 0;
}