#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    long long int N; int max_size = 50;
    scanf("%lld", &N);

    int size_arr = 0, arr[max_size], count = 0;

    while(N){
		arr[max_size - 1 - size_arr] = N%10;
		N /= 10;
		size_arr++;
	}   
    
	for(int j = max_size - size_arr; j < max_size; j++)
		arr[j] = min(arr[j], 9 - arr[j]);
	
    if(arr[max_size - size_arr] == 0)
        arr[max_size - size_arr] = 9;

	for(int j = max_size - size_arr; j < max_size; j++)
		cout << arr[j];

    return 0;
}