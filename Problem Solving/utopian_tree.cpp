#include <iostream>
#include <vector>
using namespace std;

int utopianTree(int n){
    int growth = 1;
    while(n > 0){
        growth *=2;
        n--;
        if (n>0){
            growth +=1;
            n--;
        }
    }
    return growth;
}

int main(){
    int n;
    cin >> n;
    while(n-- > 0){
        int c;
        cin >> c;
        cout << utopianTree(c) << endl;
    }
    
    return 0;
}