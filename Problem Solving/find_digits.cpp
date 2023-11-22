#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int findDigits(int n){
    int divs = 0;
    string num = to_string(n);
    for(int i=0; i<num.size(); i++){
        int d = (int)num[i]-48;
        if(d>0 && n%d == 0)
            divs++;
    }
    return divs;
}

int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int x;
        cin >> x;
        cout << findDigits(x) << endl;
    }
    return 0;
}