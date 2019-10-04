#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    int T;
	s(T);
	int arr[T];
	for(int i = 0; i < T; i++)
		s(arr[i]);
	int i = 0;
	for(i; i < T; i++)
		if((arr[i+1]>=arr[i]) && i+1 < T)
			break;
	i++;
	for(i; i < T; i++)
		if((arr[i+1]<=arr[i]) && i+1 < T)
		{
			printf("false");
			return 0;
		}
	printf("true");
    return 0;
}