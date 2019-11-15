#include <bits/stdc++.h>
#define ll long long

using namespace std;


int fndWord(int n){
	if(n == 1)
		return 2;
	else if(n == 2)
		return 3;
	
	return fndWord(n-1)+fndWord(n-2);
	
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int T, n, temp_T;
	cin >> T;
	temp_T =T;
	while(T--){
		cin >> n;
		cout << "#" << temp_T - T << " : " << fndWord(n) << endl;
	}
}