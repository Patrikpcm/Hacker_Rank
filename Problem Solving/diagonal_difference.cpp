#include <iostream>
#include <vector>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr.size();
    int LtR = 0;
    int RtL = 0;
    
    for(int i = 0; i<n; i++)
        LtR+=arr[i][i];
    
    int j=n-1;
    for(int i=0; i<n; i++){
        RtL+=arr[i][j];
        j--;
    }
    return(abs(LtR-RtL));
}