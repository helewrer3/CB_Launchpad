#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, flag = 0;
    scanf("%d", &N);
	
	for(int i = 2; i <= N/2; i++)
	{
		if(N%i == 0){
			flag = 1;
			break;
		}
	}
	
	if(flag)
		cout << "Not Prime";
	else
		cout << "Prime";
	
    return 0;
}