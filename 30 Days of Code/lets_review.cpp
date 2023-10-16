#include <vector>
#include <iostream>
using namespace std;

int main(){

    int T;
    string s;
    cin >> T;
    for(; T>0; T--){
        cin >> s;
        int j=0;
        while(true){
            if(j<s.size()){
                cout << s[j];
                j+=2;
            }
            else   
                break;
        }
        j=1;
        cout << " ";
        while(true){
            if(j<s.size()){
                cout << s[j];
                j+=2;
            }
            else   
                break;
        }
        cout << endl;
    }

return 0;
}