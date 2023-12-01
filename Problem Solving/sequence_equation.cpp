#include <iostream>
#include <vector>
using namespace std;

vector<int> permutationEquation(vector<int> p){
    vector<int> res;
    int prm = 1;
    while(prm<=(int)p.size()){
        for(int i=0; i<(int)p.size(); i++){
            if(prm == p[i]){
                for(int j=0; j<(int)p.size(); j++){
                    if(p[j] == (i+1)){
                        res.push_back(j+1);
                        break;
                    }
                }
            }
        }
        prm++;
    }
    return res;
}

int main(){
    vector<int> p, res;
    int n;
    cin >> n;
    while(n-- >0){
        int x;
        cin >> x;
        p.push_back(x);
    }
    res = permutationEquation(p);
    for(int i=0; i<(int)res.size(); i++){
        cout << res[i] << endl;
    }
    return 0;
}