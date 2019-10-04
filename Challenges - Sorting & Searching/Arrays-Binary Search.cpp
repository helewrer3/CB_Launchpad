#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, x, left, right, mid;
	cin >> n;
	long long int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	left = 0; right = n-1;
	cin >> x;
	
	bool flag = false;
	
	while(left <= right){
		mid = (left+right)/2;
		if(arr[mid] < x)
			left = mid+1;
		else if(arr[mid] > x)
			right = mid-1;
		else if(arr[mid] == x){
			flag = true;
			break;
		}
	}
	
	if(flag)
		cout << mid;
	else
		cout << -1;

    return 0;
}