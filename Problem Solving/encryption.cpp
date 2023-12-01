#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
// iffactsdontfittotheorychangethefacts
//isieae fdtonf fotrga anoyec cttctt tfhhhs
//
// wclwfoznbmyycxvaxagjhtexdkwjqhlojykopldsxesbbnezqmixfpujbssrbfhlgubvfhpfliimvmnny
// wmgjpnull cyjqlejgi lyhhdzbui wctlsqsbm fxeoxmsvv ovxjeirfm zadysxbhn nxkkbffpn bawobphfy
string encryption(string s){
    
    string result;
    //s.erase(remove(s.begin(), s.end(), ' '), s.end());
    int r, c, i, m=0, inc;
    float temp = sqrt((int)s.size());
    int temp2 = temp;
    if (temp - temp2 == 0.0){
        r = temp;
        c = temp; 
        inc = r;
    }
    else{
        r = temp;
        c = r+1;
        inc = r+1;
    }
      
    while(m < c){
        i=m;
        for(int j=0; j<=r; j++){
            if(i<(int)s.size())
                result += s[i];
            i+=inc;
        }
        result+=' ';
        m++;
    }

    return result;
}

int main(){
    string s;
    getline(cin, s);
    cout << encryption(s) << endl;
    return 0;
}