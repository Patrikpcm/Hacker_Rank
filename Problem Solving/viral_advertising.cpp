#include <iostream>
//#include <cmath> //floor(6/5);
using namespace std;

int viralAdvertising(int n){
    int  liked, shared = 5, cumulative = 0;
    
    while(n-- > 0){
        //cout << "n:" << n << ", ";
        cumulative += liked = shared/2;
        //cout << "liked:" << liked << ", ";
        //cout << "cumulative:" << cumulative << ", ";
        shared = liked*3;
        //cout << "shared:" << shared << endl;
    }
    return cumulative;
}

int main(){
    int n;
    cin >> n;
    cout << viralAdvertising(n) << endl;
    return 0;
}