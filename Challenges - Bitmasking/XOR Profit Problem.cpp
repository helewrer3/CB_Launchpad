#include <bits/stdc++.h>



using namespace std;



int main()

{

	int a, b, res = 0;

	cin >> a >> b;

	

	for(int i = a; i < b; i++)

		for(int j = a+1; j <= b; j++)

			res = max(res, i^j);

		

	cout << res;



    return 0;

}
