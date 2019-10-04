#include <bits/stdc++.h>

using namespace std;

int main()
{

    //Variables
	int input, sum = 0, i = 0;
    
    //Input
	cin >> input;
	
    //Process
	while(input > 0)
	{
		sum += (input%8)*pow(10, i);
		input /= 8;
		i++;
	}
    

    //Output
    printf("%d\n", sum);
    
    return 0;
}