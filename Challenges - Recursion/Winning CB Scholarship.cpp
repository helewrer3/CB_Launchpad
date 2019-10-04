#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
	ll N, M, X, Y, r_cpn, c_cpn, ans = INT_MIN;
	cin >> N >> M >> X >> Y;
	ll st = 1, ed = N;
	ll mid = (st+ed)/2;
	
	while(st <= ed){
		mid = (st+ed)/2;
		r_cpn = mid*X;
		c_cpn = M + (N-mid)*Y;
		
		if(r_cpn > c_cpn)
			ed = mid-1;
		else if(r_cpn <= c_cpn){
			ans = max(ans, mid);
			st = mid+1;
		}
	}
	
	cout << ans;
    return 0;
}