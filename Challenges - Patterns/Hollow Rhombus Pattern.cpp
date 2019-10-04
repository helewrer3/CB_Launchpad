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
		for(int j = i; j <= N-1; j++)
			cout << " ";
		if(i == 1 || i == N)
			for(int j = 1; j <= N; j++)
				cout << "*";
		else
		{
			cout << "*";
			for(int j = 1; j <= N-2; j++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}
    return 0;
}