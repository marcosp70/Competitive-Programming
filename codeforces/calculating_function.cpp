#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    long long int n;
    cin >> n;
    int cont = 0;
 
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -1 * ((n / 2) + 1) << endl;
    }
 
    return 0;
}
