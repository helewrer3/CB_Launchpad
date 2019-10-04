#include <bits/stdc++.h>

using namespace std;

#define MAX 1135

int main()
{
    int n, m, x, flag = 0;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> arr[i][j];
	cin >> x;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(x == arr[i][j]){
				flag = 1;
				break;
			}
	
	cout << flag;
    return 0;
}