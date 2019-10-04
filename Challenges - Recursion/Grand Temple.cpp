#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
	ll n, m_dx = 0, m_dy = 0;
	cin >> n;
	ll x[n], y[n];
	
	for(ll i = 0; i < n; i++)
		cin >> x[i] >> y[i];
	
	sort(x, x+n); 
	sort(y, y+n);

	for(ll i = 0; i < n-1; i++){
		m_dx = max(m_dx, x[i+1]-x[i]);
		m_dy = max(m_dy, y[i+1]-y[i]);
	}
	
	cout << (m_dx-1)*(m_dy-1);
    return 0;
}