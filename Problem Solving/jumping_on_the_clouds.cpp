#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c){
    int jumps = 0, i = 0;
    while (i<(int)c.size()-1){ 
        c[i+2]==0 && (i+2)<(int)c.size() ? i+=2 : i++;
        jumps++;
    }
    return jumps;
}

int main(){
    vector<int> c;
    int n;
    cin >> n;
    while(n-- >0){
        int x;
        cin >> x;
        c.push_back(x);
    }
    cout << jumpingOnClouds(c) << endl;
    return 0;
}