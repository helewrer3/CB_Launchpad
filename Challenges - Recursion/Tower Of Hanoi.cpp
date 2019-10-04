#include <bits/stdc++.h>

#define ll long long

using namespace std;

void TOH(ll n, string src, string hlp, string dst){
	if(n == 0)
		return;
	
	TOH(n-1, src, dst, hlp);
	cout << "Moving ring " << n << " from " << src <<" to " << dst << endl;
	TOH(n-1, hlp, src, dst);
}

int main()
{
	ll n;
	cin >> n;
	
	TOH(n, "A", "C", "B");
    return 0;
}