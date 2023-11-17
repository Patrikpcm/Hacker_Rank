#include <iostream>
#include <string>
using namespace std;

int beautifulDays(int i, int j, int k){
    int beautiful = 0;

    for(int c = i; c<=j; c++){
        int ts = c;
        int inv;
        string num;
        while (ts > 0){
            num += to_string(ts%10);
            ts = ts/10;
        }
        inv = stoi(num);
        if((c-inv)%k == 0)
            beautiful++;
    }
    return beautiful;
}

int main(){
    int i, j, k;
    cin >> i;
    cin >> j;
    cin >> k;
    cout << beautifulDays(i, j, k)  << endl;
return 0;
}