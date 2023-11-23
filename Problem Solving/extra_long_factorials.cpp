#include <iostream>
#include <vector>
using namespace std;

void largeIntMultiply(vector<int> &largeInt, int n);

void extraLongFactorials(int n) {
    // Convert int to vercor<int>
    vector<int> largeInteger;
    for (int i = n; i != 0; i /= 10)
        largeInteger.insert(largeInteger.begin(), i % 10);

    for (int i = n-1; i >= 2; i--) 
        largeIntMultiply(largeInteger, i);
    
    for (int i : largeInteger)
        cout << i;
    
}

void largeIntMultiply(vector<int> &largeInt, int n) {
    int carry = 0;
    for (int i = largeInt.size()-1; i >= 0; i--) {
        int number = largeInt[i] * n + carry;
        largeInt[i] = number % 10;
        carry = number / 10;
        if (i == 0 && carry != 0) {
            largeInt.insert(largeInt.begin(), 0);
            i++;
        }
    }
}

int main(){
    int n;
    cin >> n;
    extraLongFactorials(n);
    return 0;
}