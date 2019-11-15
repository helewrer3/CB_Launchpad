#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll maxArea(ll arr[], ll n){
	stack<ll> indexes;
	indexes.push(1);
	ll left, right, area, maxarea = INT_MIN, topEle;
	for(ll i = 2; i < n; i++){
		if(indexes.empty() or arr[indexes.top()] <= arr[i]){
			indexes.push(i);
		}
		else{
			while(!indexes.empty() and arr[indexes.top()] > arr[i]){
				topEle = arr[indexes.top()];
				indexes.pop();
				right = i-1;
				if(indexes.empty())
					left = 0;
				else
					left = indexes.top();
				area = (right-left)*topEle;
				maxarea = max(area, maxarea);
			}
			indexes.push(i);
		}
	}

	while(!indexes.empty()){
		topEle = indexes.top();
		indexes.pop();
		right = n-1;
		if(indexes.empty())
			left = 0;
		else
			left = indexes.top();
		area = (right-left)*arr[topEle];
		maxarea = max(area, maxarea);
	}

	return maxarea;
}

int main(){
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++){
		cin >> arr[i];
	}

	cout << maxArea(arr, n);

	return 0;
}