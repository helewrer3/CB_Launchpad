#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    
    while(N >= 1)
    {
        cout << N%10;

        N /= 10;
    }
    return 0;
}