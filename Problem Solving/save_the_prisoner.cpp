#include <iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s){
    m--;
    int mod = (m%n);
    //cout <<"mod:"<< mod << ", spot:" << s << endl;
    return ((mod+s)-n) > 0 ? (mod+s)-n : (mod+s);
}
int main(){

    int n,m,s, T;
    cin >> T;
    while(T-- > 0){
        cin >> n; //prisioners
        cin >> m; //candies
        cin >> s; //drawn distribution
        cout << saveThePrisoner(n,m,s) << endl;
    }
    return 0;
}