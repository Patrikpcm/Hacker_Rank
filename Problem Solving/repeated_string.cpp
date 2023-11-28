#include <iostream>
#include <string>
#include <vector>
using namespace std;

long repeatedString(string s, long n){
    int as=0, sizeS = (int)s.size();
    for(int i=0; i<sizeS;i++){
        if(s[i]=='a')
            as++;
    }
    long freq = (n/sizeS)*as;
    for(int i=0; i<n%sizeS;i++){
        if(s[i]=='a')
            freq++;
    }
    return freq;
}

int main(){
    string s;
    long n;
    getline(cin,s);
    cin >> n;
    cout << repeatedString(s,n) << endl;
    return 0;
}