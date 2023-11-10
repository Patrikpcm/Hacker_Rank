#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int pickingNumbers(vector<int> a){
    sort(a.begin(), a.end());
    vector<int> temp;
    vector<int>::iterator it;
    int max_vet = 0, max_vet_temp = 1;
        
    for(it = a.begin(); it!= a.end(); it++){
        if(temp.empty())
            temp.push_back(*it);
        else{
            bool conj = true;
            int i=0;
            while (conj && i < temp.size()){
                if(abs(temp[i] - *it) > 1)
                    conj = false;
                i++;
            }
            if(conj == true){
                temp.push_back(*it);
                max_vet_temp++;
            }
            else{
                if(max_vet < max_vet_temp)
                    max_vet = max_vet_temp;
                
                temp.clear();
                temp.push_back(*it);
                max_vet_temp = 1;
            }
        }
    }//for
    return max_vet > max_vet_temp ? max_vet : max_vet_temp;
        

}

int main(){
    vector<int> a;
    int n;
    cin >> n;
    while(n-- >0){
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    cout << pickingNumbers(a) << endl;

return 0;
}