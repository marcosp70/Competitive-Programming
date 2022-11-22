#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
    int n,result,maior,menor,a,b; cin >> n;
 
    for (int i = 0; i<n; i++){
        cin >> a;
        cin >> b;
        if(a%b!=0){
        if(a<b){
            cout<<b-a<<endl;
        }
        else if(a>b){
        result = b-(a%b);
        cout<<result<<endl;}
 
    }
    else cout<<0<<endl;
    }
 
    
 
return 0;
}
