#include <bits/stdc++.h>

 using namespace std;

int main()
{
    int T;
    cin >> T;

    //Variables
    int n;

    while(T--)
    {
        //Input
		cin >> n;
        int arr[n];
		for(int i = 0; i < n; i++)
			cin >> arr[i];
        //Process
        int max_so_far = INT_MIN, max_ending_here = 0; 
  
    	for (int i = 0; i < n; i++) 
    	{ 
        	max_ending_here = max_ending_here + arr[i]; 
        	max_so_far = max(max_ending_here, max_so_far);
        	max_ending_here = max(max_ending_here, 0);
    	}
    	
    	//Output
    	cout << max_so_far << endl;
    }
    return 0;
}
