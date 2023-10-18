#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> bin;
    vector<int>::reverse_iterator rit;

    for(; n>0;){
        bin.push_back(n%2);
        n=n/2;
    }
    /*
    for(rit = bin.rbegin(); rit != bin.rend(); rit++){
        cout << *rit << " ";
    }
    cout << endl;
    */
    int max_seq = -1, x = 0;
    for(rit = bin.rbegin(); rit != bin.rend(); rit++){

        if(*rit == 1)
            x++;
        else{
            if(x > max_seq)
                max_seq = x;
            x = 0;
        }
    }
    if(max_seq == -1 || max_seq < x)
        max_seq = x;

    cout << max_seq << endl;
  
return 0;
}