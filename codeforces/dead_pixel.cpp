#include <bits/stdc++.h>
 
using namespace std;
#define endl "\n"
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
    int n,d,cima,baixo,e,a,b,x,y; 
    
    cin >> n;
 
    for(int i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        cin >> x;
        cin >> y;
        d = ((a-1)-x)*b;
        e = x*b;
        baixo = a*y;
        cima = ((b-1)-y)*a;
        cout << max(max(d,e),max(baixo,cima)) << endl;
        }
 
 
    
 
return 0;
}
