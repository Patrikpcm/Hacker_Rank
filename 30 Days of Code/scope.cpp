#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

//abs(número) sempre retorna o valor absoluto
class Difference {
private:
    vector<int> elements;
  
public:
    Difference(vector<int> & vec){
        this->elements = vec;
    }
    
    int maximumDifference;

    void computeDifference(){
        vector<int>::iterator it;
        std::sort(elements.begin(), elements.end());
        int a, b;
        it = elements.begin();
        a = *it;
        it = (elements.end() - 1);
        b = *it;

        maximumDifference = abs(a-b);
    }
};

int main(){
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}