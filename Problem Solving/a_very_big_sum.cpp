#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    vector<long>::iterator it;
    long sum = 0;
    
    for(it=ar.begin(); it<ar.end(); it++)
        sum+=*it;
        
    return sum;
}