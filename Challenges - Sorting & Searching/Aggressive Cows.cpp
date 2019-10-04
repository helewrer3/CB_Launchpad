#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
	ll int n, c;
	cin >> n >> c;
	ll int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr+n);
	c = c-2;
	
	ll index_diff = (n-1)/(c+1);
	ll prev_index = 0;
	ll c_index = index_diff;
	int c_dist, dist = INT_MAX;
	
	while(c_index < n && c){
		c--;
		c_dist = min(arr[c_index] - arr[prev_index], arr[n-1] - arr[c_index]);
		dist = min(dist, c_dist);
		prev_index += index_diff;
		c_index += index_diff;
	}
	
	cout << dist;
    return 0;
}