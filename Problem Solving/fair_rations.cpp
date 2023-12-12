#include <iostream>
#include <vector>
using namespace std;

string fairRations(vector<int> B){
    int breads=0;
    for(int i=0; i<(int)B.size(); i++){
        if (B[i]%2 != 0){
            B[i]++;
            breads++;
            if(i+1 == (int)B.size())
                return ("NO");
            else{
                B[i+1]++;
                breads++;
            }
                
        }
    }
    return (to_string(breads));
}

int main(){
    vector<int> B;
    int n;
    cin >> n;

    while (n-- >0){
        int x;
        cin >> x;
        B.push_back(x);
    }
    cout << fairRations(B) << endl;

    return 0;
}