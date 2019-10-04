#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a, b = 0, c = 0;
	cin >> a;
	if(a == 1)
		cout << -1 << endl;
	else if(a%2 == 0)
	{
        b = (a*a)/4 - 1;
        c = (a*a)/4 + 1;
		cout << b << " " << c;
	}
	else
	{
        b = (a*a - 1)/2;
        c = (a*a + 1)/2;
		cout << b << " " << c;
	}
    return 0;
}
