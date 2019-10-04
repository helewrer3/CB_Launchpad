#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);

    //Variables
    int n, inc, dec, incdec, c_dec, c_inc, c_incdec;

    while(T--)
    {
        //Input
        s(n);
		int arr[n];
		inc = dec = incdec = 0;
		for(int i = 0; i < n; i++)
			s(arr[i]);

        //Process
        for(int i = 0; i < n; i++){
			c_dec = 1;
			for(int j = i+1; j < n; j++)
				if(arr[j] < arr[j-1])
					c_dec++;
				else
					break;
			dec = max(dec, c_dec);
		}

		for(int i = 0; i < n; i++){
			c_inc = 1;
			for(int j = i+1; j < n; j++)
				if(arr[j] > arr[j-1])
					c_inc++;
				else
					break;
			inc = max(inc, c_inc);
		}
		
		for(int i = 0; i < n; i++)
		{
			c_incdec = 0; c_dec = c_inc = 0;
			for(int j = i+1; j < n; j++)
				if(arr[j] > arr[j-1] && !c_dec)
					c_inc++;
				else if(arr[j] < arr[j-1] && c_inc)
					c_dec++;
				else
					break;
			c_incdec = c_inc + c_dec + 1;
			incdec = max(c_incdec, incdec);
		}

        //Output
		//cout << incdec << endl << inc << endl << dec << endl;
        cout << max(incdec, max(inc, dec)) << endl;

    }
    return 0;
}