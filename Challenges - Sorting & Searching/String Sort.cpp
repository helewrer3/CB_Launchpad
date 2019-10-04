#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	string arr[n];
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr+n);
	
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(!arr[j].find(arr[i]))
				swap(arr[i], arr[j]);
	
	for(int i = 0; i < n; i++)
		cout << arr[i] << endl;
    return 0;
}