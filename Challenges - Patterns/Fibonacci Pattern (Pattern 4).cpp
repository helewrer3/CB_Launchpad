#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N;
	s(N);
	int a = 0, b = 1, sum = 1;
	for(int i = 1; i <= N; i++)
    {
		for(int j = 1; j <= i; j++)
		{
			p(a);
			sum = a+b;
			a = b;
			b = sum;
		}
        cout << endl;
    }
    return 0;
}