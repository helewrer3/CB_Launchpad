#include<bits/stdc++.h>
using namespace std;

void printArr(int arr[], int st, int ed){
	if(st > ed)
		return;
	
	int mid = (st + ed)/2;
	cout << arr[mid] << " ";
	printArr(arr, st, mid-1);
	printArr(arr, mid+1, ed);
	
	return;
}

int main(){
	int T, n, data;
	cin >> T;
	while(T--){
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		printArr(arr, 0, n-1);
		cout << endl;
	}
	return 0;
}
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	MaxK(arr, n, k);
	return 0;
}