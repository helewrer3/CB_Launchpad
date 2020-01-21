#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int A[n];
	int B[n];
	vector<int> V;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	for(int i = 0; i < n; i++)
		cin >> B[i];

	for(int it = 0; it < n; it++){
		for(int jt = 0; jt < n; jt++){
			if(A[it] == B[jt]){
				V.push_back(A[it]);
				B[jt] = -1;
				break;
			}
		}
	}
	sort(V.begin(), V.end());

	cout << "[";
	cout << V[0];
	for(int i = 1; i < V.size(); i++){
		cout << ", " << V[i];
	}
	cout << "]";
	return 0;
}   