#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    //Variables
	int num, i = 0, t_num, sum_odd, sum_even;
    

    while(T)
    {
        //Input
        scanf("%d", &num);
		sum_odd = 0;
		sum_even = 0;

        //Process
        while(num > 0)
		{
			if((num%10)%2)
				sum_odd += num%10;
			else
				sum_even += num%10;
			num /= 10;
		}

        //Output
		if((sum_even%4 == 0) || (sum_odd%3 == 0))
			cout << "Yes\n";
		else
			cout << "No\n";
        

        T--;
    }
    return 0;
}