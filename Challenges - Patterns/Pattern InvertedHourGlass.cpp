#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N;
	s(N);
	for(int i = N; i >= 0; i--)
	{
		for(int j = N; j >= i; j--)
			p(j);
		for(int k = 1; k <= 4*(i)-2; k++)
			cout << " ";
        if(i > 0)
		    for(int j = i; j <= N; j++)
		    	p(j);
		else
			for(int j = 1; j <= N; j++)
				p(j);
        cout << endl;
	}
	for(int i = N; i >= 1; i--)
	{
		for(int j = N; j >= N-i+1; j--)
			p(j);
		for(int k = 1; k <= 4*(N-i)+2; k++)
			cout << " ";
		for(int j = N-i+1; j <= N; j++)
				p(j);
        cout << endl;
	}
    return 0;
}