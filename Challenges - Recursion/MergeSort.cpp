#include <bits/stdc++.h>

#define ll long long

using namespace std;

void merge(ll arr[], ll st, ll mid, ll ed){
	ll i = st; ll j = mid+1; ll k = 0;
	ll sortedarr[ed-st+1] = {0};
	
	
	while(i <= mid and j <= ed){
		if(arr[i] < arr[j]){
			sortedarr[k] = arr[i];
			i++;
		}
		else{
			sortedarr[k] = arr[j];
			j++;
		}
		k++;
	}
	
	while(i <= mid){
		sortedarr[k] = arr[i];
		i++;
		k++;
	}
	while(j <= ed){
		sortedarr[k] = arr[j];
		j++;
		k++;
	}
	
	k = 0;
	
	for(int p = st; p <= ed; p++){
		arr[p] = sortedarr[k];
		k++;
	}
}

void mergeSort(ll arr[], ll st, ll ed){
	if(st >= ed)
		return;
	
	ll mid = (st+ed)/2;
	
	mergeSort(arr, st, mid);
	mergeSort(arr, mid+1, ed);
	
	merge(arr, st, mid, ed);
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	
	mergeSort(arr, 0, n-1);
	
	for(ll i = 0; i < n; i++)
		cout << arr[i] << " ";
	
	cin.get();
	cin.get();
    return 0;
}