#include <iostream>
#include <vector>
using namespace std;

vector<int> stones(int n, int a, int b){
    if(a > b){
        a = b + a;
        b = a - b;
        a = a - b;
    }
    int step = b - a;
    vector<int> result;
    for(int i = a * (n-1); i < b * (n-1); i += step) 
        result.push_back(i);
    
    result.push_back(b * (n-1));
    return result;
}

int main(){
    int T, n, a, b;
    cin >> T;
    while(T-- >0){
        cin >> n >> a >> b;
        vector<int> st = stones(n,a,b);
        for(int i=0; i<(int)st.size(); i++)
            cout << st[i] << " ";
        cout << endl;
    }

    return 0;
}