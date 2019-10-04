#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T;
	cin >> T;
	
	long long int n, x;
	double k;
	
	while(T--){
		cin >> n >> k;
		float p = 1/k;
		x = pow(n,p);
		cout << x << endl;
	}

    return 0;
}