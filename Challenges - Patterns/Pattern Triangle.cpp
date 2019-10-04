#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N;
	s(N);
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= 2*(N-i); j++)
			cout << " ";
		for(int j = i; j <= 2*i-1; j++)
			p(j);
		for(int j = 2*i-2; j >= i; j--)
			p(j);
		cout << endl;
	}
    return 0;
}