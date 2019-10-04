#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Max_f, Min_f, Step;
    scanf("%d%d%d", &Min_f, &Max_f, &Step);

    //Variables
	int i = Min_f;
	int temp = 0;

    while(i <= Max_f)
    {
        //Input
        temp = 5*(i - 32)/9;

        //Process
        cout << i << " " << temp << endl;

        i += Step;
    }
    return 0;
}