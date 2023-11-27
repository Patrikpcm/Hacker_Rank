#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int> v){
    for(int i = 0; i<(int)v.size(); i++)
        cout << v[i] << ",";
    cout << endl;
}

int nonDivisibleSubset(int k, vector<int> s){
    vector<int> remainder(k,0);
    for (int i=0; i<(int)s.size(); i++)
        remainder[s[i]%k]++;
    int sub = 0;
   // imprime(remainder);
    sub = (remainder[0] != 0); //if different from 0, sub receive 1.
    //cout << "sub:"<< sub << endl;
    for(int i=1; 2*i <=k; i++){
        int j=(k-i);
      //  cout << "i:"<< i << ", j:" << j <<", SUB:"<< sub << endl;
        if(j==i){
        //    cout << "min:" << min(1,remainder[j]) << endl;
            sub += min(1,remainder[j]);
        }
        else{
          //  cout << "max:" << max(remainder[i], remainder[j]) << endl;
            sub += max(remainder[i], remainder[j]);
        }
    }
    return sub;
}

int main(){
    vector<int> s;
    int T, k;
    cin >> T >> k;
    
    while(T-- > 0){
        int x;
        cin >> x;
        s.push_back(x);
    }
   
    cout << nonDivisibleSubset(k,s) << endl;
    return 0;
}
/*
582740017 954896345 590538156 298333230 859747706 155195851 331503493 799588305 164222042 563356693 80522822 432354938 652248359
*/