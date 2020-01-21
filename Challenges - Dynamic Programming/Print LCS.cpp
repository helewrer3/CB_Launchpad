#include <bits/stdc++.h>
using namespace std;

void lcs(string str1, string str2){
	int dp[str1.size()+1][str2.size()+1];
	for(int i = 0; i <= str1.size(); i++)
		dp[i][0] = 0;
	for(int i = 0; i <= str2.size(); i++)
		dp[0][i] = 0;
	
	for(int i = 1; i <= str1.size(); i++){
		for(int j = 1; j <= str2.size(); j++){
			if(str1[i-1] != str2[j-1]){
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
			else{
				dp[i][j] = dp[i-1][j-1] + 1;
			}
		}
	}

	int index = dp[str1.size()][str2.size()];
    char lcs[index+1];
	lcs[index] = '\0';
    int i = str1.size(), j = str2.size(); 
    while (i > 0 && j > 0){
      if (str1[i-1] == str2[j-1]){ 
          lcs[index-1] = str1[i-1];
          i--; j--; index--;
      }
      else if(dp[i-1][j] > dp[i][j-1]) 
         i--; 
      else
         j--; 
   } 

   cout << lcs;
}



int main(){
	string str1;
	string str2;
	cin >> str1 >> str2;
	
	
	
	lcs(str1, str2);
		
    return 0;
}