#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr){
    int maxF = 0;
    int count = 1;
    sort(arr.begin(), arr.end());

    for(int i=0; i<(int)arr.size(); i++){
        if(arr[i] == arr[i+1])
            count++;
        else{
            if(count>maxF)
                maxF = count;
            count = 1;
        }
    }
    return ((int)arr.size()-maxF);
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    while(n-- >0){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << equalizeArray(arr) << endl;
    return 0;
}