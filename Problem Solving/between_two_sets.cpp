#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int getTotalX(vector<int> a, vector<int> b) {
    vector<int>::iterator it;
    vector<int> solution;

    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    int dv, end;
    it = b.end();
    end = *(it-1);
    it = a.begin();
    dv = *it;
   
    for(; dv<=end; dv+=(*a.begin())){
        bool is = true;
        for (it = a.begin(); it<a.end(); ++it){
            if(dv % (*it) != 0)
                is = false;
            if(!is)
                break;
        }
                
        if(is){
            for (it = b.begin(); it<b.end(); it++){
                if(*it % dv != 0)
                    is = false;
                if(!is)
                    break;
            }   
        }

        if(is)
            solution.push_back(dv);
    }
    return(solution.size());
}

int main(){
    vector<int> a, b;
    int m, n, x;

    cin >> m;
    cin >> n;
    for(int i = 0; i<m; i++){
        cin >> x;
        a.push_back(x);
    }
    
    for(int i = 0; i<n; i++){
        cin >> x;
        b.push_back(x);
    }

    cout << getTotalX(a, b) << endl;

return 0;
}