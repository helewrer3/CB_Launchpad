#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string str, pattern;
	cin >> str >> pattern;
	bool dp[str.size()+1][pattern.size()+1];
	memset(dp, false, sizeof(dp));
	dp[0][0] = true;

	for(ll i = 1; i <= pattern.size(); i++)
		if(pattern[i-1] == '*')
			dp[0][i] = dp[0][i-1];

	for(ll i = 1; i <= pattern.size(); i++){ //col
		for(ll j = 1; j <= str.size(); j++){ //row
			if(pattern[i-1] == '*'){
				dp[j][i] = dp[j-1][i] or dp[j][i-1];
			}
			else if(pattern[i-1] == '?'){
				dp[j][i] = dp[j-1][i-1];
			}
			else{
				dp[j][i] = dp[j-1][i-1] and (pattern[i-1] == str[j-1]);
			}
		}
	}

	cout << dp[str.size()][pattern.size()];
	return 0;
}