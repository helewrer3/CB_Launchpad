#include <bits/stdc++.h>
#define ll long long

using namespace std;

string osf_bank = "";

void fndCmb(int arr[], int T, int ans, int i, string osf, int n){
	if(ans == T){
		std::size_t found = osf_bank.find(osf);
		if(found==std::string::npos){
			osf_bank.append(osf);
			cout << osf << endl;
		}
		return;
	}
	else if(arr[i] >= T or i >= n){
		return;
	}
	
	int term = arr[i];
	
	fndCmb(arr, T, ans + term, i+1, osf + to_string(term) + " ", n);
	fndCmb(arr, T, ans, i+1, osf, n);
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n, T;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> T;
	sort(arr, arr+n);
	
	fndCmb(arr, T, 0, 0, "", n);
	
}