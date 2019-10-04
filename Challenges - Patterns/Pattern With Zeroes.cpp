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
		for(int j = 1; j <= i; j++)
			if(j == 1 || j == i)
				p(i);
			else
				cout << 0 << " ";
		cout << endl;
	}
    return 0;
}
