#include <bits/stdc++.h>

using namespace std;

int main()
{

    //Variables
	int N1, N2, n = 1, val;
	
	//Input
	cin >> N1 >> N2;
	
	// Process
	while(n <= N1)
	{
		val = 3*n+2;
		if(val%N2 != 0)
			printf("%d\n", val);
        else
            N1++;
		n++;
	}
    return 0;
}