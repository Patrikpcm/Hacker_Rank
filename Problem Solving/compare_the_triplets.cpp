#include <vector>
#include <iostream>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> result;
    result.assign(2,0);
    vector<int>::iterator ita, itb;
  
    itb = b.begin();
    for(ita = a.begin(); ita<a.end(); ita++){
        if(*ita > *itb)
            result[0]+=1;
        else if(*ita < *itb)
            result[1]+=1;
        
        itb++;
    }
    return(result);
}