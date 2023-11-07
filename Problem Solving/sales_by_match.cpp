#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar){
    vector<int>::iterator it, it2;
    int pair = 0, i = 0, iter = 0;

    cout << "vetor inicial: ";
    for(it2=ar.begin(); it2<ar.end(); it2++)
        cout << *it2 << " ";

    cout << endl;
    while(i < n){
        it = ar.begin();
        ar.erase(it);
        i++;

        cout << "Vetor na iteracao " << iter;
        iter++;
        for(it2=ar.begin(); it2<ar.end(); it2++)
            cout << *it2 << " ";

        cout << endl;

        for(it2=ar.begin(); it2<ar.end(); it2++){
            if(*it == *it2){
                pair++;
                i++;
                ar.erase(it2);
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