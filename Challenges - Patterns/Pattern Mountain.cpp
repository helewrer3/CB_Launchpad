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
			p(j);
		for(int k = 1; k <= 4*(N-i)-2; k++)
			cout << " ";
        if(i<N)
		    for(int j = i; j >= 1; j--)
		    	p(j);
		else
			for(int j = N-1; j >= 1; j--)
				p(j);
        cout << endl;
	}
    return 0;
}