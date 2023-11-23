#include <iostream>
#include <string>
using namespace std;

string appendAndDelete(string s, string t, int k){
    //converter s para t em k movimentos
    int i = 0, j = 0;
    for (; i < (int)s.size() && j < (int)t.size(); ++i,++j) {
        if (s[i] != t[j])
            break;
    }
    
    int need = ((int)s.size() - i) + ((int)t.size() - j);
    if ((need <= k && (k-need) % 2 == 0) || k >= (int)s.size() + (int)t.size()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main(){
    string s, t;
    int k;
    getline(cin,s);
    getline(cin,t);
    cin >> k;
    cout << appendAndDelete(s,t,k) << endl;
}
/*

#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int k;
    cin >> k;
    
    
    
    

   

*/