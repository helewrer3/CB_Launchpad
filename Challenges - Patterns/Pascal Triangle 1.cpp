#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N, val = 1;
	s(N);
	for(int i = 0; i < N; i++)
	{
		for(int j = 1; j <= 2*(N-i); j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
		{
			if(j == 0 || i == 0)
				val = 1;
			else
				val = val*(i-j+1)/j;
			cout << val << "   ";

        }
		cout << endl;
	}
    return 0;
}