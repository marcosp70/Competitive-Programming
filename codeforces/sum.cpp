#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
    int n; cin >> n;
    vector<int> num (3); 
 
    for (int i = 0; i<n;i++){
        cin >> num[0];
        cin >> num[1];
        cin >> num[2];
 
        sort(num.begin(),num.end());
 
        if(num[0]+num[1] == num[2]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
    }
 
 
    
 
return 0;
}
