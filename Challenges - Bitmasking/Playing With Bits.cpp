#include <bits/stdc++.h>

using namespace std;

int main()
{
	int T, a, b;
	cin >> T;
	
	while(T--){
		int count = 0, temp;
		cin >> a >> b;
		
		for(int i = a; i <= b; i++){
			temp = i;
			while(temp > 0){
				count += temp&1;
				temp /= 2;
			}
		}
		
		cout << count << endl;
	}

    return 0;
}