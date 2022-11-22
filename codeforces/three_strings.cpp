#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
int n; cin >> n;
for(int i=0;i<n;i++){
    string s1; cin >> s1;
    string s2; cin >> s2;
    string s3; cin >> s3;
    int no = 0;
    for(int j=0;j<s1.size();j++){
        string a,b,c;
        a = s1[j];
        b = s2[j];
        c = s3[j];
        if(c==b || c==a){
            no = 1;
        }
        else{
            no = 2;
            j=s1.size();
        }
 
        }
        if (no == 2) cout << "NO" << endl;
        if (no == 1) cout << "YES" << endl;
    }
 
return 0;
}
