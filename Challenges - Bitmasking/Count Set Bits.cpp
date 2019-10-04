#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, a;
	cin >> T;
	
	while(T--){
		int count = 0;
		cin >> a;
		
		int temp = a;
			while(temp > 0){
				count += temp&1;
				temp /= 2;}
		
		cout << count << endl;
	}

    return 0;
}