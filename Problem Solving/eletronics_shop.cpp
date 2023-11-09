#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b){
    vector<int>::iterator it, it2;
    int max_value = -1;
    for(it=keyboards.begin(); it!=keyboards.end(); it++){
       // cout << *it << " + ";
        for(it2=drives.begin(); it2!=drives.end(); it2++){
            //cout << *it << " + " << *it2 << " = " << ((*it) + (*it2)) << endl;
            if(((*it) + (*it2)) <= b && ((*it) + (*it2)) > max_value ){
              //  cout << "Atualizando max_value para: " << (*it + *it2) << endl;
                max_value = (*it + *it2);
            }
                
        }
    }
    return max_value;
}

int main(){
    vector<int> keyboards, drives;
    int b, n, m;
    cin >> b;
    cin >> n;
    cin >> m;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        keyboards.push_back(x);
    }
   // sort(keyboards.begin(),keyboards.end());

    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        drives.push_back(x);
    }
    //sort(drives.begin(), drives.end());

    cout << getMoneySpent(keyboards, drives, b) << endl;

return 0;
}