#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> arr){
    vector<int> result;
    map<int, int> arr_map;
    map<int, int>::iterator it, it2;
    int longest = 0;
    
    for(int i=0; i<(int)arr.size(); i++)
        arr_map[arr[i]]++;

    for(it=arr_map.begin(); it!=arr_map.end(); it++){
        result.push_back(it->first);
        if (it->second > 1)
            result.push_back(it->first);
        for(it2=next(it); it2!=arr_map.end(); it2++){
            //cout << "abs(" << it->first << " - " << it2->first << ") = " << abs(it->first - it2->first) << endl;
            if(abs(it->first - it2->first) <= 1){
                result.push_back(it2->first);
                if (it2->second > 1)
                    result.push_back(it2->first);
            }
            else
                break;
        }
       
        if((int)result.size() > longest)
            longest = result.size();

        result.clear();
    }
    /*
    cout << "SORTED" << endl;
    for(itt = new_arr.begin(); itt!=new_arr.end(); itt++)
        cout << itt->first << " : " << itt->second << endl;
    
    cout << "SORTED" << endl;

    cout << "SORTED" << endl;
    for(auto &[element, frequency] : new_arr)
        cout << element << " : " << frequency << endl;
    cout << "SORTED" << endl;
    */
    
    return longest;
}

int main(){
    vector<int> arr;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << longestSubarray(arr) << endl;
}