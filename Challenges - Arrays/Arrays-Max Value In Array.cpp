#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    //Variables
    int arr[n], max;
	max = INT_MIN;
	
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i]>max)
			max = arr[i];
	}
	
	cout << max;
	
    return 0;
}