#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> ar) {
    
    vector<int>::iterator it, it2;
    sort(ar.begin(),ar.end());
    int pairs = 0;

    for(it = ar.begin(); it<ar.end(); it++){
        it2 = it;
        it2++;
        for(; it2<ar.end(); it2++){
            if((*it + *it2)%k == 0)
                pairs++;  
        }
    }
    return pairs;
    
}