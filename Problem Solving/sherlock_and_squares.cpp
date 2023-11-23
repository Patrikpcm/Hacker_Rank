#include <iostream>
#include <math.h>
using namespace std;

int squares (int a, int b){
    int first = sqrt(a), last = sqrt(b);
    return first*first == a ? last-first+1 : last-first;
}


int main(){
    int T, a, b;
    cin >> T;
    while (T-- >0){
        cin >> a >> b;
        cout << squares(a,b) << endl;
    }
    return 0;
}
