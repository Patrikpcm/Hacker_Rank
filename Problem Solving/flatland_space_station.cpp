#include <iostream>
#include <vector>
using namespace std;

int flatlandSpaceStations(int n, vector<int> c){
    int max = 0;
    for(int i=0; i<n; i++){
        int min = INT32_MAX;
        for(int j=0; j<(int)c.size(); j++){
            if(abs(c[j]-i) < min)
                min = abs(c[j]-i);
        }
        if (min > max)
            max = min;
    }
    return max;
}

int main(){
    vector<int> space_stations;
    int n, m;
    cin >> n >> m;
    while(m-- >0){
        int x;
        cin >> x;
        space_stations.push_back(x);
    }
    cout << flatlandSpaceStations(n, space_stations) << endl;
}