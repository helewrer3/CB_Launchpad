#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    int T, sum_p, sum_n, c_sum, sum;
    scanf("%d", &T);

    //Variables
    int n;

    while(T)
    {
        //Input
		s(n);
		sum_p = sum_n = INT_MIN;
		sum = 0;
		c_sum = 0;
		int arr[n];
		for(int i = 0; i < n; i++)
			s(arr[i]);

        //Process
        for(int i = 0; i < n; i++)
		{
			c_sum += arr[i];
			sum_p = max(sum_p, c_sum);
			c_sum = max(0, c_sum);
		}
		
		for(int i = 0; i < n; i++)
		{
			sum += arr[i];
			arr[i] = -arr[i];
		}
		
		c_sum = 0;
		
		for(int i = 0; i < n; i++)
		{
			c_sum += arr[i];
			sum_n = max(sum_n, c_sum);
			c_sum = max(0, c_sum);
		}

        //Output
        cout << max(sum_n + sum, sum_p) << endl;

        T--;
    }
    return 0;
}