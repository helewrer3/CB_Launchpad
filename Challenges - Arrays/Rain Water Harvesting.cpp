#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //Variables
    int arr[n], l_wall[n], r_wall[n], water = 0;
	
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	l_wall[0] = arr[0];
	r_wall[n-1] = arr[n-1];
	
	for(int i = 1; i < n; i++)
		l_wall[i] = max(l_wall[i-1], arr[i]);
	
	for(int i = n-2; i >= 0; i--)
		r_wall[i] = max(r_wall[i+1], arr[i]);
	
	for(int i = 0; i < n; i++)
		water += min(l_wall[i] - arr[i], r_wall[i] - arr[i]);
	
	cout << water;
    return 0;
}