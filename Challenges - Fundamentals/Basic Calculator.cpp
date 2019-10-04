#include <bits/stdc++.h>

#define s(a) scanf("%d", &a)
#define p(a) pow(a, 3)

using namespace std;

int main()
{
	char ch;
    int n1, n2, result;
	cin >> ch;
	while(ch != 'x' && ch != 'X')
	{
		if(ch == '+'){
			cin >> n1 >> n2;
			result = n1+n2;
			cout << result << endl;
		}
		else if(ch == '-'){
			cin >> n1 >> n2;
			result = n1-n2;
			cout << result << endl;
		}
		else if(ch == '*'){
			cin >> n1 >> n2;
			result = n2*n1;
			cout << result << endl;
		}
		else if(ch == '/'){
			cin >> n1 >> n2;
			result = n1/n2;
			cout << result << endl;
		}
		else if(ch == '%'){
			cin >> n1 >> n2;
			result = n1%n2;
			cout << result << endl;
		}
		else
			cout << "Invalid operation. Try again." << endl;
		cin >> ch;
	}
    return 0;
}