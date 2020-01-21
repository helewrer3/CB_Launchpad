#include<bits/stdc++.h>
using namespace std;
unordered_map<long long int, long long int> dp;

long long int minJump(int arr[], int n, long long int steps, int i){
	if(i+arr[i] >= n-1){
		return steps+1;
	}

	long long int ans = INT_MAX;
	for(int j = i+1; j <= i+arr[i]; j++){
		ans = min(minJump(arr, n, steps + 1, j), ans);
	}
	return ans;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
		cout << minJump(arr, n, 0, 0) << endl;
	}
	return 0;
}