#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k){
    int e = 100;
    int i = 0;
    unsigned int sizeC = c.size();
    cout << "sizeC:" << sizeC << endl;
    while(true){
        i+=k;
        e--;
        cout << "i:" << i << ", e:" << e << endl;
        if(i >= sizeC){
            i = (i%sizeC);
            cout << "i%\sizeC:" << i << endl;
        }
        if(c[i] == 1){
            e-=2;
            cout << "c[i]==1, e:" << e << endl;
        }
        if(i == 0)
            break;
    }
    return e;
}

int main(){
    vector<int> c;
    int n, k;
    cin >> n;
    cin >> k;
    while(n-- >0){
        int x;
        cin >> x;
        c.push_back(x);
    }
    cout << jumpingOnClouds(c,k) << endl;
    return 0;
}