#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, count, n;
	
	cin >> T;
	
	while(T--){
		count = 0;
		cin >> n;
		
		while(n > 0){
			count += n&1;
			n /= 2;
		}
		
		cout << count << endl;
	}

    return 0;
}