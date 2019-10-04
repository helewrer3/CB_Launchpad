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
	
	sort(arr, arr+n); 

	for (int i = 0; i < n - 2; i++) 
    	for (int j = i + 1; j < n - 1; j++) 
	        for (int k = j + 1; k < n; k++) 
            	if (arr[i] + arr[j] + arr[k] == target) 
                {  
					cout << arr[i] << ", " << arr[j] << " and " << arr[k] << endl;
                }
	
    return 0;
}