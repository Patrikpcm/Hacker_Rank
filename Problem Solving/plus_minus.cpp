#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
    vector<int>::iterator it;
    double neg=0, pos=0, zer=0;
    int tam = arr.size();
    
    for (it = arr.begin(); it<arr.end(); it++) {
        if(*it < 0)
            neg++;
        else if(*it > 0)
            pos++;
        else
            zer++;
    }
    cout << setprecision(6) << fixed;
    cout << (pos/tam) << endl;
    cout << (neg/tam) << endl;
    cout << (zer/tam) << endl;
}