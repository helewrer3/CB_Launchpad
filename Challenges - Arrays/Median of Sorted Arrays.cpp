#include <bits/stdc++.h>

using namespace std;

#define MAX 1135

int main()
{
    int n;
	cin >> n;
	n*= 2;
	int arr[n];
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	sort(arr, arr+n);

	cout << arr[n/2 - 1] << endl;
	
    return 0;
}