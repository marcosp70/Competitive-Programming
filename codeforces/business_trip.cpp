#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
int soma=0,cont=0,k,n; cin >> k ;
vector<int> vetor;
for (int i=0;i<12;i++){
    cin >> n;
    vetor.push_back(n);
}
 
sort(vetor.begin(),vetor.end(),greater<>());
 
if (k != 0){
for(int i=0;i<12;i++){
    soma += vetor[i];
    cont++;
    if(soma >= k){
        cout << cont << endl;
        break;
    }
}
if (soma < k){
    cout << "-1" << endl;
}
}
else cout << "0" << endl;
return 0;
}
