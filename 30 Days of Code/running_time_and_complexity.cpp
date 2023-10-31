#include <iostream>
#include <cmath>

using namespace std;

void prime(int n){

    bool prime = true;
    if(n == 1){
        cout << "Not prime" << endl;
        return;
    }

    for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                prime = false;
                break;
            }
    }
        if(prime)
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;   

}

int main(){
    int T;
    cin >> T;
    while(T-- > 0){
        int x;
        cin >> x;
        prime(x);
    }


return 0;
}