#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, size, carry = 0, add = 0;
	
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	
	cin >> m;
	int brr[m];
	for(int i = 0; i < m; i++)
		cin >> brr[i];
	
	size = max(n, m);
	int crr[size]; //holds arr digits
	int drr[size]; //holds brr digits
	
	int i = 0;
	for(i; i < size-n; i++)
		crr[i] = 0;
	for(i; i < size; i++)
		crr[i] = arr[i-(size-n)];
	
	i = 0;
	for(i; i < size-m; i++)
		drr[i] = 0;
	for(i; i < size; i++)
		drr[i] = brr[i-(size-m)];
	
	//Work with crr and drr
	int res[n];
	
	for(int i = size-1; i >= 0; i--){
		add = (crr[i]+drr[i]+carry);
		res[i] = add%10;
		carry = add/10;
	}
	
	if(carry){
		cout << carry << ", ";
		for(int i = 0; i < size; i++)
			cout << res[i] << ", ";
	}
	else
		for(int i = 0; i < size; i++)
			cout << res[i] << ", ";

	cout<<"END";
	
    return 0;
}