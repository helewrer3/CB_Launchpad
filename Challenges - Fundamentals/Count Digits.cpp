#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, digit, i = 0;
    scanf("%d%d", &N, &digit);
	
	while(N > 0)
	{
		if(N%10 == digit)
			i++;
		N/=10;
	}
	cout << i;
    return 0;
}