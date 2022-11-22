#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin >> n;
    int cont = 0;
    int aux;
    for (int i = 5; i > 0; i--)
    {
        aux = n / i;
        n -= aux * i;
        cont += aux;
        if (n <= 0)
        {
            break;
        }
    }
    cout << cont << endl;
 
    return 0;
}
