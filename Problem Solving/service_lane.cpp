#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<int> serviceLane(int n, vector<int> width, vector<vector<int>> cases){
    vector<int> results;
    for(int i = 0; i <(int)cases.size(); i++){
        int min_width = INT8_MAX;
        for(int j = cases[i][0]; j <= cases[i][1]; j++){
            min_width = min(width[j], min_width);
        }
        results.push_back(min_width);
    }
    return results;
}

int main(){
    int n, T;
    cin >> n >> T;
    vector<vector<int>> cases(T);
    vector<int> width;

    while(n-- > 0){
        int x;
        cin >> x;
        width.push_back(x);
    }
    for(int i=0; i<T; i++){
        cases[i].resize(2);
        for(int j=0; j<2; j++){
            int x;
            cin >> x;
            cases[i][j] = x;
        }
    }
    vector<int> result = serviceLane(n,width,cases);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << endl;
    }
    return 0;
}