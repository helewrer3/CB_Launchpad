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
		if(i <= N/2)
		{
			if(i == 1)
			{
				cout << "*";
				for(int i = 1; i <= N/2-1; i++)
					cout << " ";
				for(int i = 1; i <= N/2+1; i++)
					cout << "*";
			}
			else
			{
                cout << "*";
				for(int i = 1; i <= N/2 - 1; i++)
					cout << " ";
				cout << "*";
			}
		}
		else if(i == N/2+1)
			for(int i = 1; i <= N; i++)
				cout << "*";
		else
		{
			if(i == N)
			{
				for(int i = 1; i <= N/2+1; i++)
					cout << "*";
				for(int i = 1; i <= N/2-1; i++)
					cout << " ";
				cout << "*";
			}
			else
			{
				for(int i = 1; i <= N/2; i++)
					cout << " ";
                cout << "*";
                for(int i = 1; i <= N/2-1; i++)
					cout << " ";
				cout << "*";
			}
		}
		cout << endl;
	}
    return 0;
}