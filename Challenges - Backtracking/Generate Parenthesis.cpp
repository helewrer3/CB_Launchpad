#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isValid(string str){
	int ans = 0;
	int ptlb = 0; //pos to look back
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '('){
			ans++;
		}
		else if(str[i] == ')'){
			ans--;
		}

		if(ans < 0)
			return false;
	}
	
	if(!ans)
		return true;
	else
		return false;
}

void blncdBrack(int n, string output){
	if(output.size() == n){
		if(isValid(output)){
			cout << output << endl;
		}
		return;
	}
	
	blncdBrack(n, output + ')');
	blncdBrack(n, output + '(');
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n;
	cin >> n;
	n *= 2;

	blncdBrack(n, "");
	
}