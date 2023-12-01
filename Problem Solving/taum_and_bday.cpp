#include <iostream>
using namespace std;

long taumBday(int b, int w, int bc, int wc, int z){
    //b,w - num. de presentes
    //bc, wc - custo de cada
    //z - custo conversão
    long bp = min(bc, wc+z);
    long wp = min(wc, bc+z);
    return bp*b+wp*w;
}

int main(){
    int b, w, bc, wc, z, T;
    cin >> T;
    while(T-- >0){
        cin >> b >> w >> bc >> wc >> z;
        cout << taumBday(b,w,bc,wc,z) << endl;
    }
    return 0;
}