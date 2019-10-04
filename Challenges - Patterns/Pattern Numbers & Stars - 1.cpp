#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N, val = 1, star = 1;
	s(N);
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N-i+1; j++)
			p(j);
		if(i > 1)
		{
			for(int j = 1; j <= star; j++)
				cout << "* ";
			star += 2;
		}
		cout << endl;
	}
    return 0;
}