#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int hurdleRace(int k, vector<int> height){
    int max_e = *max_element(height.begin(), height.end());

        return (max_e - k) > 0 ? (max_e - k) : 0; 
}

int main(){
    vector<int> hurdles;
    int n, k;
    cin >> n;
    cin >> k;
    while(n-- >0){  
        int x;
        cin >> x;
        hurdles.push_back(x);
    }
    cout << hurdleRace(k,hurdles) << endl;
    return 0;
}