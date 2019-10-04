#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    //Variables
	int input;
    

    while(T)
    {
        //Input
		scanf("%d", &input);
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
        printf("%d\n", num);

        T--;
    }
    return 0;
}