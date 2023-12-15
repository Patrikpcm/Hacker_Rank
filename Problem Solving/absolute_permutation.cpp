#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> absolutePermutation(int n, int k){
    vector<int> res(n, 0);
    std::unordered_set<int> s;
    for (int i = 1; i <= n; i++) {
        //i is pos[i]
        int index = i - k;

        // Try to find a valid position for the current number num
        if (index >= 1 && s.find(index) == s.end()) {
            res[i - 1] = index;
            s.insert(index);
        } else {
            // Try the other option if the first one is not available
            index = i + k;
            if (index <= n && s.find(index) == s.end()) {
                res[i - 1] = index;
                s.insert(index);
            } else {
                // If no valid position is found, return {-1}
                return {-1};
            }
        }
    }

    return res;
}

int main(){
    vector<int> resultado;
    int n, k;
    cin >> n >> k;
    resultado = absolutePermutation(n,k);
    for(int i=0; i<(int)resultado.size(); i++)
        cout << resultado[i] << ' ';
    cout << endl;
}