#include<bits/stdc++.h>
using namespace std;

string osf[40320];
int n = 0;

void permutations(string input, string output){
	if(input.size() == 0){
		for(int i = 0; i < n; i++){
			if(osf[i] == output)
				return;
		}
		osf[n] = output;
		n++;
		return;
	}

	for(int i = 0; i < input.size(); i++){
		string ros = input.substr(0, i) + input.substr(i+1);
		permutations(ros, output + input[i]);
	}
}

int main(){
	string input;
	cin >> input;
	permutations(input, "");
	sort(osf, osf + n);
	for(int i = 0; i < n; i++)
		cout << osf[i] << endl;
	return 0;
}