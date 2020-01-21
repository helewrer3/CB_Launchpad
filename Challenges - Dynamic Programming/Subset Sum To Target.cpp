#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool subset(ll a[], ll n, ll key){
	bool dp[5000][5000]={0};
    for(int i=0;i<n;i++)
        dp[i][0]=1;
    dp[0][a[0]]=1;
    for(int i=1;i<n;i++)
        for(int j=0;j<=key;j++)
            if(j<a[i])
                dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=dp[i-1][j]||dp[i-1][j-a[i]];    
    return dp[n-1][key];
}

int main(){
	ll N, T;
	cin >> N >> T;
	ll arr[N];
	for(ll i = 0; i < N; i++)
		cin >> arr[i];
	
	bool ans = subset(arr, N, T);

	if(ans)
		cout << "Yes";
	else
		cout << "No";
	return 0;
}