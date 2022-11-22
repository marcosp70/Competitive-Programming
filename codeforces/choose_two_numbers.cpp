#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int aux,n; cin >> n;
    vector<int> a (n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    cin >> n;
    vector<int> b (n);
    for(int i = 0;i<n;i++){
        cin >> b[i];
    }
 
    for(int i = 0;i<a.size();i++){
        for(int j = 0; j<b.size(); j++){
            aux=a[i] + b[j];
            auto it1 = find(a.begin(),a.end(), aux);
            auto it2 = find(b.begin(),b.end(), aux);
            if(it1 == a.end() && it2 == b.end()){
                cout << a[i] << " " << b[j] << endl;
                return 0;
            }
        }
    }
 
    return 0;
}
