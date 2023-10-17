#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    vector<int>::reverse_iterator rit;

    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        arr.push_back(x);
    }

    for(rit = arr.rbegin(); rit<arr.rend(); rit++){
        cout << *rit << " ";
    }

return 0;
}