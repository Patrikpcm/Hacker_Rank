#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar){
    vector<int>::iterator it;
    int pair = 0, val;
    
    while(n-- > 0){
        it = ar.begin();
        val = *it;
        ar.erase(it);
        for(it=ar.begin(); it != ar.end(); it++){
            if(*it == val){
                pair++;
                ar.erase(it);
                n--;
                break;
            }
        }
    } 
    return pair;
}

int main(){
    vector<int> ar;
    int n, x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        ar.push_back(x);
    }

    cout << sockMerchant(n, ar) << endl;
    
return 0;
}