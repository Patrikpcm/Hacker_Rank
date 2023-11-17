#include <iostream>
#include <vector>
using namespace std;

string angryProfessor(int k, vector<int> a){
    int threshold=0;
    for(unsigned int i=0; i<a.size(); i++){
        if(a[i]<=0)
            threshold++;
    }
    return threshold >= k ? "NO" : "YES"; 
}

int main(){
    vector<int> students;
    int t, n, k;
    cin >> t;
    while(t-- > 0){
        cin >> n;
        cin >> k;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            students.push_back(x);
        }
        cout << angryProfessor(k, students) << endl;
    }
    return 0;
}