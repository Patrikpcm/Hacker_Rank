#include <iostream>
#include <vector>

using namespace std;

void miniMaxSum(vector<int> arr) {
    vector<int>::iterator it;
    sort(arr.begin(), arr.end());
    
    int64_t min=0, max=0;
    for(it=arr.begin(); it<arr.begin()+4; it++)
        min+=*it;
    for(it=arr.end(); it>arr.end()-5; it--)
        max+=*it;
        
    cout << min << " " << max << endl;
}