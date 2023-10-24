#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int migratoryBirds(vector<int> arr) {
    vector<int>::iterator it;
    sort(arr.begin(), arr.end());
    int ms;
    int ms_f = 0;
    int count = 1;

    for(it=arr.begin(); it!=arr.end(); it++){
        if(*it == *(it+1))
            count++;
        else{
            if(count > ms_f){
                ms_f = count;
                ms = *it;
            }
            count = 1;
        }
    }
    return ms;
}

int main(){
    unsigned int T;
    cin >> T;
    vector<int> arr;

    while(T-->0){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << migratoryBirds(arr) << endl;

return 0;
}