#include <bits/stdc++.h>
using namespace std;

int lcs(string s1, string s2, string s3){
	int dp[200][200][200] = {0};

	for(int i = 1; i <= s1.length(); i++){
		for (int j = 1; j <= s2.length(); j++)
		{
			for(int k = 1; k <= s3.length(); k++){
				if(s1[i-1] == s2[j-1] and s2[j-1] == s3[k-1]){
					dp[i][j][k] = 1 + dp[i-1][j-1][k-1]; 
				}
				else{
					dp[i][j][k] = max(dp[i][j][k-1], max(dp[i-1][j][k],dp[i][j-1][k]));
				}
			}
		}
	}

	return dp[s1.length()][s2.length()][s3.length()];


}
int main(int argc, char const *argv[])
{
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;

	cout<<lcs(s1,s2, s3)<<endl;
	return 0;
}