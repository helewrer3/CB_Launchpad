#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d ", a)

using namespace std;

int main()
{
    int N, space = 2;
    s(N);

    for(int i = 1; i <= N/2+1; i++)
	{
		for(int j = 1; j <= 4*(N/2+1-i); j++)
			cout << " ";
		for(int j = i; j >= 1; j--)
			p(j);
		for(int j = 1; j <= space - 4; j++)
			cout << " ";
		for(int j = 1; j <= i; j++)
			if(i != 1)
				p(j);
		space += 4;
		cout << endl;
	}
	
	int end_space = 4;
	space -= 8;
	
	for(int i = 1; i <= N/2; i++)
	{
		for(int j = 1; j <= end_space; j++)
			cout << " ";
		end_space += 4;
		for(int j = N/2+1-i; j >= 1; j--)
			p(j);
		for(int j = 1; j <= space - 4; j++)
			cout << " ";
		for(int j = 1; j <= N/2+1-i; j++)
            if(i != N/2)
			    p(j);
		space -= 4;
        cout << endl;
	}
	
	cout << endl;
    return 0;
}