#include <bits/stdc++.h>

using namespace std;

int main()
{

    //Variables
	int input;
    
    //Input
	cin >> input;
	int base = 1;
	int num = 0;
	
    //Process
	while(input > 0)
	{
		num += (input%10)*base;
		input /= 10;
		base *= 2;
	}
    

    //Output
    printf("%d", num);
    
    return 0;
}