#include <iostream>
using namespace std;

int chocolateFeast(int n, int c, int m){
 //n dinheiro //c preço chocolate //m desconto embalagem
    int embalagens = n/c; 
    int chocolates = embalagens;
    
    while(embalagens >= m)
    {
        chocolates += embalagens/m;
        embalagens = (embalagens%m) + embalagens/m;
    }
    return chocolates;
}

int main(){
    int T, n, c, m;
    cin >> T;
    while(T-- >0){
        cin >> n >> c >> m;
        cout << chocolateFeast(n,c,m) << endl;
    }
    return 0;
}