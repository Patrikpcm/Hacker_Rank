#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename vet> void printArray(vector<vet> v){
    typename vector<vet>::iterator it;
    for(it=v.begin(); it<v.end(); it++)
        cout << *it << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> int_vector;
    vector<string> s_vector;
    while(n-- >0){
        int x;
        cin >> x;
        string s;
        cin >> s;
        int_vector.push_back(x);
        s_vector.push_back(s);
    }
    printArray(int_vector);
    printArray(s_vector);

return 0;
}