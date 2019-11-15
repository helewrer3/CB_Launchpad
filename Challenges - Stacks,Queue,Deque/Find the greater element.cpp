#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(int i = 0; i < n; i++){
		for(int j = 1; j < n; j++){
			if(arr[j] > arr[i]){
				cout << arr[j] << " ";
				break;
			}
			else if(j == n-1){
				cout << -1 << " ";
				break;
			}
		}
	}
	return 0;
}