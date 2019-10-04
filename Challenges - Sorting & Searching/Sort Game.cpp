#include <bits/stdc++.h>

using namespace std;


bool mycomp(pair<string, int> p1, pair<string, int> p2)
{
	if(p1.second == p2.second)
		return p1.first < p2.first;
	return p1.second > p2.second;
}


int main()
{
	int n, x;
	cin >> x >> n;
	int sal;
	string name;
	pair<string, int> res[n];
	
	for(int i = 0; i < n; i++){
		cin >> name >> sal;
		res[i].first = name;
		res[i].second = sal;
	}
	
	sort(res, res+n, mycomp);
	
	for(int i = 0; i < n; i++)
		if(res[i].second >= x)
			cout << res[i].first << " " << res[i].second << endl;

    return 0;
}