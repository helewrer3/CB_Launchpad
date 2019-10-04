#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll tile(ll N, ll M){
	ll arr[N+1];
	arr[0] = arr[1] =  1;
	for(ll i = 2; i <= N; i++){
		if(i < M)
			arr[i] = arr[i-1];
		else{
			arr[i] = (arr[i-1] + arr[i-M])%1000000007;
		}
	}

	return arr[N];
}

int main()
{
	
	ll T, N, M;
	cin >> T;
	while(T--){
		cin >> N >> M;
		cout << tile(N, M) << endl;
	}
    return 0;
}