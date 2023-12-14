#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string happyLadybugs(string b){
    for(int i=0; i<(int)b.size(); i++){
        if(b[i]=='_'){
            sort(b.begin(),b.end());
            break;
        }
    }
    bool happy = true;
    for(int i=0; i<(int)b.size(); i++){
        if(b[i]== '_')
            continue;
        else if (b[i]==b[i+1] || b[i]==b[i-1])
            continue;
        else{
            happy = false;
            break;
        }
    }
    if(happy)
        return "YES";
    else
        return "NO";
}

int main(){
   string G;
   getline(cin,G);
   int g = stoi(G);
   while (g-- >0){
    string size, s;
    getline(cin,size);
    getline(cin,s);
    cout << happyLadybugs(s) << endl;
   }
   return 0;
}