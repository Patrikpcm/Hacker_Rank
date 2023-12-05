#include <iostream>
#include <vector>
using namespace std;

int beatifulTriplets(int d, vector<int> arr){
    int triplets = 0;
    for(int i=0; i<(int)arr.size(); i++){
        for(int j=i+1; j<(int)arr.size(); j++){
            if(arr[j]-arr[i] == d){
                for(int k=j+1; k<(int)arr.size(); k++){
                    if(arr[k]-arr[j]==d)
                        triplets++;
                }
            }
        }
    }
    return triplets;
}

int main(){
    vector<int> arr;
    int T, d;
    cin >> T >> d;

    while(T-->0){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << beatifulTriplets(d, arr) << endl;
    return 0;
}