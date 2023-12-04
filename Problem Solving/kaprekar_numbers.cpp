#include <iostream>
#include <string>
using namespace std;

void kaprekarNumbers(int p, int q){
    bool kaprekar = false;
    for(int i = p; i <= q; i++){
        unsigned long squared = (unsigned long) i*i;
        string str = to_string(squared);
        int str_size = str.length();
        
        if(str_size == 1){
            if(squared == (unsigned long)i){
                cout << i << " ";
                kaprekar = true;
            }
        }
        else if(str_size > 1){
            //cout << "Squared: " << squared << ", " << stoi(str.substr(0,str_size/2)) << ", " << stoi(str.substr(str_size/2,str_size-1)) << endl;
            int left = stoi(str.substr(0,str_size/2));
            int right = stoi(str.substr(str_size/2,str_size-1));
            //cout << "Left: " << left << ", right: " << right << endl;
            
            int sum = left + right;
            
            if(sum == i){
                cout << i << " ";
                kaprekar = true;
            }
        }
    }
    if(!kaprekar)
        cout << "INVALID RANGE\n";
}

int main(){
    int p,q;
    cin >> p >> q;
    kaprekarNumbers(p,q);
    return 0;
}