#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, temp, p, res = 0;
	cin >> n;
	int arr[n], brr[8] = {0};

	for(int i = 0; i < n; i++){
		cin >> arr[i];
		temp = arr[i], p = 0;
		while(temp > 0){
			brr[p] += temp&1;
			temp /= 2;
			p++;
		}
	}

	for(int i = 0; i < 8; i++){
		brr[i] %= 3;
		res += brr[i]*(pow(2, i));
	}

	cout << res;

    return 0;
}