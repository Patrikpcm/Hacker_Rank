#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> cutTheSticks(vector<int> arr){
    vector<int> result;
    sort(arr.begin(),arr.end());
    while((int)arr.size() > 0){
        result.push_back((int)arr.size());
        int lower = *arr.begin();
        arr.erase(arr.begin());
       
        for(int i=0; i<(int)arr.size(); i++)
            arr[i] -= lower; 
              
        while(true){
            if(!arr.empty() && *arr.begin() <= 0)
                arr.erase(arr.begin());
            else
                break;
        }
    }
    return result;
}

int main(){
    vector<int> sticks, result;
    int T;
    cin >> T;
    while(T-- > 0){
        int x;
        cin >> x;
        sticks.push_back(x);
    }

    result = cutTheSticks(sticks);
    
    for(int i=0; i<(int)result.size(); i++)
        cout << result[i] << endl;
        
    return 0;
}