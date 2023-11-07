#include <iostream>
using namespace std;

int main(){
    unsigned int d1,m1,y1,d2,m2,y2;
    cin >> d1;
    cin >> m1;
    cin >> y1;
    cin >> d2;
    cin >> m2;
    cin >> y2;

    if(y1 > y2)
        cout << "10000" << endl;
    
    else if(y1 < y2)
        cout << "0" << endl;
    
    else if(m1 > m2)
        cout << 500 * (m1-m2) << endl;
    
    else if(d1 > d2)
        cout << 15 * (d1-d2) << endl;
    
    else
        cout << "0" << endl;

return 0;
}