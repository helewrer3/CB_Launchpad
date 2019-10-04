#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int T;
	cin >> T;
	int st = -1, ed = -1;
	int x;
	while(T--){
		cin >> x;
		st = -1; ed = -1;
		for(int i = 0; i < n; i++)
			if(arr[i] == x)
				st = i;
		for(int i = n-1; i >= 0; i--)
			if(arr[i] == x)
				ed = i;
		if(st < ed)
			cout << st << " " << ed << endl;
		else
			cout << ed << " " << st << endl;
		
	}
    return 0;
}