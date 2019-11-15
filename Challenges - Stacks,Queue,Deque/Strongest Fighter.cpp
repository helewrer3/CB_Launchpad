#include<bits/stdc++.h>
using namespace std;

void MaxK(int arr[], int n, int k){
	deque<int> Q(k);
	int i = 0;
	for(i; i < k; i++){
		while(!Q.empty() and arr[i] >= arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
	}

	for(i; i < n; i++){
		cout << arr[Q.front()] << " ";
		while(!Q.empty() and Q.front() <= i-k)
			Q.pop_front();
		while(!Q.empty() and arr[i] >= arr[Q.back()])
			Q.pop_back();
		Q.push_back(i);
	}

	cout << arr[Q.front()];
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	MaxK(arr, n, k);
	return 0;
}