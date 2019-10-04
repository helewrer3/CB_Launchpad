#include <bits/stdc++.h>

#define ll long long

using namespace std;

void shuffle(ll arr[], ll n){
	srand(time(NULL));
	ll j;
	for(ll i = n-1; i >= 0; i--){
		j = rand()%(i+1);
		swap(arr[i], arr[j]);
	}
}

ll partition(ll arr[], ll st, ll ed){
	ll i = st-1, j = st;
	
	while(j < ed){
		if(arr[j] <= arr[ed]){
			i++;
			swap(arr[j], arr[i]);
		}
		j++;
	}
	i++;
	
	swap(arr[i], arr[ed]);
	
	return i;
}

void quicksort(ll arr[], ll st, ll ed){
	if(st >= ed)
		return;
	
	ll p = partition(arr, st, ed);
	
	quicksort(arr, st, p-1);
	quicksort(arr, p+1, ed);
}

int main()
{
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0; i < n; i++)
		cin >> arr[i];
	shuffle(arr, n);
	quicksort(arr, 0, n-1);
	for(ll i = 0; i < n; i++)
		cout << arr[i] << " ";
    return 0;
}