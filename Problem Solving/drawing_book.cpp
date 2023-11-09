#include <iostream>
using namespace std;

int pageCount(int n, int p) {
    int dir, esq;
    dir = p/2;
    esq = (n/2)-dir;
    return dir < esq ? dir : esq;
    //max = (a & b) > max ? a & b : max;  
}

int main(){
    int n, p;
    cin >> n;
    cin >> p;
    cout << pageCount(n,p) << endl;
return 0;
}