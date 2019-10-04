#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) pow(a, 3)

using namespace std;

int main()
{
    int N, t_N;
    scanf("%d", &N);

    //Variables
    int sum = 0;
	t_N = N;

    while(t_N > 0)
	{
		sum+=p(t_N%10);
		t_N/=10;
	}
	if(N == sum)
		printf("true");
	else
		printf("false");
    return 0;
}