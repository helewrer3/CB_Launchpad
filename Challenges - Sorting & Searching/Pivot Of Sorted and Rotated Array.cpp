#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	int largest = INT_MIN;
	int index;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(largest < arr[i]){
			largest = arr[i];
			index = i;
		}
	}
	
	cout << index;
    return 0;
}