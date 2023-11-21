#include <iostream>
#include <vector>
using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> circularArray;
    unsigned int sizeA = a.size(), sizeQ = queries.size();
    int posZero = (sizeA - (k%sizeA));
   // cout << "posZero:" << posZero << endl;
   
    for(unsigned int i=0; i<sizeQ; i++){
        int pos = posZero+queries[i];
        //cout << "POS:" << pos << endl;
        if(pos<sizeA){
            //cout << a[pos] << endl;
            circularArray.push_back(a[pos]);
        }
        else{
            pos -= sizeA;
        //    cout <<"POS2"<< pos << endl;
            circularArray.push_back(a[pos]);
        }

    }

    return circularArray;
}

int main(){
    vector<int> array, queries, circularArray;
    int n, rotations, q;
    cin >> n;
    cin >> rotations;
    cin >> q;
    while(n-- > 0){
        int x;
        cin >> x;
        array.push_back(x);
    }
    while(q-- > 0){
        int x;
        cin >> x;
        queries.push_back(x);
    }
    
    circularArray = circularArrayRotation(array, rotations, queries);
    
    for(int i = 0; i<circularArray.size(); i++)
        cout << circularArray[i] << endl;
    
    return 0;
}