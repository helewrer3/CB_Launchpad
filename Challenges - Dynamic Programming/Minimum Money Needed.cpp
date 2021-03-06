#include<bits/stdc++.h>
#define ll long long
using namespace std;

void minMoney(vector<pair<ll, ll> > List, ll W, ll N){
	ll dp[W+1][N+1];
	memset(dp, 0, sizeof(dp));
	for(ll i = 0; i <= W; i++)
		dp[i][0] = INT_MAX;

	for(ll j = 1; j <= N; j++){ //Item list
		for(ll i = 1; i <= W; i++){ //0-Weight
			if(List[j-1].second > i)
				dp[i][j] = dp[i][j-1];
			else
				dp[i][j] = min(dp[i][j-1], dp[i-List[j-1].second][j]+ List[j-1].first);
		}
	}

	cout << dp[W][N];
}

int main(){
	ll N, W;
	cin >> N >> W;
	ll data;
	vector<pair<ll, ll> > List; //cost weight
	
	for(ll i = 0; i < W; i++){
		cin >> data;
		if(data != -1){
			List.push_back(make_pair(data, i+1));
		}
	}

	minMoney(List, W, List.size());
	return 0;
}