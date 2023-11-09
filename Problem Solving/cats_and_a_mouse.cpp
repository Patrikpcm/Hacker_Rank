#include <iostream>
using namespace std;

string catAndMouse(int x, int y, int z) {
    int catA = abs(x-z);
    int catB = abs(y-z);
    
    if(catA == catB)
        return ("Mouse C");
    
    return catA<catB ? "Cat A" : "Cat B";
}

int main(){
    int x, y, z, T;
    cin >> T;
    while(T-- > 0){
        cin >> x;
        cin >> y;
        cin >> z;
        cout << catAndMouse(x,y,z) << endl;
    }

    return 0;
}