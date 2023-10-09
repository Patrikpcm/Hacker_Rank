#include <iostream>
#include <bits/stdc++.h>
#include <iomanip> //setprecision
using namespace std;

int main(){
    int a, i = 4;
    double b, d = 4.0;
    string s2, s = "HackerRank ";
    
    cin >> a;
    cin >> b;
    cin.ignore(256,'\n');
    getline(cin, s2);
    
    cout << (i+a) << endl;
    cout << fixed;
    cout << setprecision(1);
    cout << (d+b) << endl;
    cout << (s+s2) << endl;
    return 0;
}