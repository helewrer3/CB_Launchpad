#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    //Variables
    int D;
	float r1, r2;

    //Input
    cin >> a >> b >> c;
	D = pow(b,2) - 4*a*c;
	
    //Process
    if(D > 0)
	{
		r1 = (-b - sqrt(D))/(2*a);
		r2 = (-b + sqrt(D))/(2*a);
		cout << "Real and Distinct\n" << r1 << " "<< r2;
	}
	else if(D == 0)
	{
		r1 = -b/(2*a);
		cout << "Real and Equal\n" << r1 << " " << r1;
	}
	else
	{
		cout << "Imaginary";
	}

    return 0;
}