#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
#define f first
#define s second
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){
 
    int n,pontos=0; cin >> n;
    string red = "RRRRRRRR",blue = "BBBBBBBB", aux;
    vector<string> vetor(8);
    char resposta;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<8;j++){
            cin >> aux;
            vetor[j] = aux;
            if (vetor[j] == red){
                resposta = 'R';
            }
        }
        for(int j = 0; j<8;j++){
            if (vetor[0][j] == 'B' && vetor[1][j] == 'B' && vetor[2][j] == 'B' && vetor[3][j] == 'B' && vetor[4][j] == 'B' && vetor[5][j] == 'B' && vetor[6][j] == 'B' && vetor[7][j] == 'B'){
                resposta = 'B';
            } 
            }        
            cout << resposta << endl;
 
    }
 
 
    
 
return 0;
}
