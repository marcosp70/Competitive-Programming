#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
    int n, numbers; cin >> n;
    set<int> s;
    for(int i = 0;i<n;i++){
    cin >> numbers;
    vector<int> num (numbers); 
    for(int j = 0;j<numbers;j++){
        cin >> num[j];
        s.insert(num[j]);
    }
 
    if(s.size() == num.size()){cout << "YES" << endl;}
    else{cout << "NO" << endl;}
    s.clear();
 
    }
 
 
 
    
 
return 0;
}
