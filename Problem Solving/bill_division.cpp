#include <iostream>
#include <vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b){
    int b_charged, b_actual=0;
    for(unsigned int i=0; i<bill.size(); i++){
        if(i != k)
            b_actual += bill[i];
    }
    b_charged = b - (b_actual/2);
    if(b_charged == 0)
        cout << "Bon Appetit" << endl;
    else   
        cout << b_charged << endl;
}

int main(){
    vector<int> bill;
    int n, k;
    cin >> n;
    cin >> k;
    while(n-- > 0){
        int x;
        cin >> x;
        bill.push_back(x);
    }
    int b;
    cin >> b;
    bonAppetit(bill,k,b);
    return 0;
}