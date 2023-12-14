#include <iostream>
using namespace std;

long strangeCounter(int t){
    long last=3, step=3;
    while(t > last){
        step *= 2;
        last +=step;
    }
    return last-t + 1;
}

int main(){
    int t;
    cin >> t;
    cout << strangeCounter(t) << endl;
    return 0;
}