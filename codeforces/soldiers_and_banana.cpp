#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    int valor = 0;
    for (int i = 1; i <= c; i++)
    {
        valor += i * a;
    }
 
    if (valor > b)
    {
        cout << valor - b << endl;
    }
    else
    {
        cout << 0 << endl;
    }
 
    return 0;
}
