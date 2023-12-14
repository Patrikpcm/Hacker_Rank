#include <iostream>
#include <vector>
#include <string>
using namespace std;

string gridSearch(vector<string> G, vector<string> P){
    
    for(int i=0; i<(int)(G.size() - P.size()) + 1; i++){
        bool substring = false;
        if(G[i].find(P[0]) != string::npos){
            
            int pos = G[i].find(P[0]);
           // cout << "Encontrou valor parecido em i:" << i << " col:" << pos << endl; 
            substring = true;
            int count = i+1;
            while(pos != string::npos){
                for(int j=1; j<(int)P.size(); j++){
                    if(G[count].find(P[j],pos) != pos){
                        //cout << "diferente em j:" << j << " col pos:" << G[count].find(P[j],pos) << endl;
                        substring = false;
                        break;
                    }
                    count++;
                }

                if(substring)
                    break;

                if( G[i].find(P[0],pos+1) != string::npos){
                    pos = G[i].find(P[0],pos+1);
                   // cout << "proxima substring na col:" << pos << endl;
                    substring = true;
                    count=i+1;
                }
                else
                    pos = string::npos;
            }
        }
        if(substring)
            return("YES");
    }
    return("NO");
}

int main(){
    vector<string> G, P;
    string T;
    getline(cin,T);
    int TT = stoi(T);
    while(TT-- > 0){
       // cout<< "Entre com os valores da Matriz" << endl;
        string R, C, r, c;
        getline(cin, R);
        getline(cin,C);
        int RR = stoi(R);
        for(int i=0; i<RR; i++){
            string s;
            getline(cin,s);
            G.push_back(s);
        }
        //cout << "Digite os valores da submatriz" << endl;
        getline(cin, r);
        getline(cin,c);
        int rr = stoi(r);
        for(int i=0; i<rr; i++){
            string s;
            getline(cin,s);
            P.push_back(s);
        }
      //  cout << "Valores definidos!" << endl;
        cout << gridSearch(G,P) << endl;
    }
    return 0;
}

/*
1
5
10
1234567890  
0987654321  
1111111111  
1111111111  
2222222222
3
6
876543  
111111  
111111
*/

/*
1
5 15
111111111111111
111111111111111
111111011111111
111111111111111
111111111111111
3 5
11111
11111
11110

*/