#include <bits/stdc++.h>

using namespace std;

#define MAX 1135

int main()
{
    int n;
	cin >> n;
	int arr[MAX] = {1};
	int carry = 0, size = 1, prod;
	
	for(int i = 2; i <= n; i++)
	{
		for(int j = 0; j < size; j++)
		{
			prod = arr[j]*i;
			arr[j] = (prod + carry)%10;
			carry = (prod + carry)/10;
			if(j == size - 1 && carry)
				size++;
		}
	}
	
	for(int j = size - 1; j >= 0; j--)
		cout << arr[j];
	
    return 0;
}