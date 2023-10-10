#include <iostream>
#include <vector>
using namespace std;

int birthday(vector<int> s, int d, int m){
//a soma tem que ser igual = d
//a quantidade de posições do vetor somadas = m
    vector<int>::iterator it, it2;
    int divs = 0;

    for(it = s.begin(); it<s.end(); it++){
        it2 = it;
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += *it2;
            it2++;
        }
        if(sum == d)
            divs++;
    }

    return divs;

}

int main(){
    
    int l, d, m;
    cin >> l;
    vector<int> s(l);

    for(; l>0; l--){
        int x;
        cin >> x;
        s.push_back(x);
    }
    cin >> d;
    cin >> m;

    cout << birthday(s,d,m) << endl;

return 0;
}