#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N, val = 1, star;
	s(N);
	star = N-1;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= i; j++)
			cout << j;
		for(int j = 1; j <= star; j++)
			cout << "*";
		star--;
		cout << endl;
	}
    return 0;
}