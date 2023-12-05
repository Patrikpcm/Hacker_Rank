#include <iostream>
#include <vector>
using namespace std;

int minimumDistances(vector<int> a){
    int distance = a.size();
    for(int i=0; i<(int)a.size(); i++){
        for(int j=(int)a.size()-1; j>i; j--){
            if(a[i]==a[j] && j-i < distance){
                distance = j-i;
            }
        }
    }
    return distance<a.size() ? distance : -1;
}

int main(){
    vector<int> a;
    int T;
    cin >> T;
    while(T-- >0){
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << minimumDistances(a) << endl;
}