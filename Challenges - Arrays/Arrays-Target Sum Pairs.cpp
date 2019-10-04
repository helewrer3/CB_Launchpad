#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) printf("%d\n", a)

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);

    //Variables
    int arr[n], target;
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> target;
	
	for(int i = 0; i < n-1; i++)
		for(int j = i+1; j < n; j++)
			if(arr[i]+arr[j] == target){
				if(arr[i] < arr[j])
					cout << arr[i] << " and " << arr[j] << endl;
				else
					cout << arr[j] << " and " << arr[i] << endl;
			}
	
    return 0;
}