#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, n, res = 0;
	cin >> T;
	
	while(T--){
		cin >> n;
		res ^= n;
	}

	cout << res;
    return 0;
}