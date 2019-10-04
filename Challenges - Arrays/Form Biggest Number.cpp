#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    //Variables
    int n;

    while(T--)
    {
        cin >> n;
		string arr[n];

		for(int i = 0; i < n; i++)
			cin >> arr[i];

		for(int i = 0; i < n-1; i++)
			for(int j = i+1; j < n; j++)
				if(arr[j] + arr[i] > arr[i] + arr[j])
					swap(arr[j], arr[i]);

		for(int i = 0; i < n; i++)
			cout << arr[i];

		cout << endl;
    }

    return 0;
}