#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string biggerIsGreater(string w){
    if(next_permutation(w.begin(), w.end()))
        return w;
    else
        return "no answer";
}

int main(){
    int T;
    cin >> T;
   
    while(T-- >0){
        string w;
        getline(cin,w);
        cout << biggerIsGreater(w) << endl;
    }
    
    return 0;
}